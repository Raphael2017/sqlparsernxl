SELECT NAME, LABEL, MAPPING from dict_type_fields where  PARENT_TYPE_ID = (SELECT ID FROM DICT_ELEMENT_TYPES WHERE NAME = ? ) AND DELETED = 'N';

SELECT e FROM PolicyDeploymentEntity e WHERE e.developmentId = ? AND e.overrideCount = ? ORDER BY e.activeTo DESC;

SELECT r FROM PolicyDeploymentRecord r WHERE r.id = ?;

SELECT e.ID FROM DEPLOYMENT_ENTITIES e INNER JOIN DEPLOYMENT_RECORDS r ON (e.DEP_RECORD_ID = r.ID) WHERE e.DEVELOPMENT_ID = ? AND e.OVERRIDE_CNT = ? AND e.ACTIVE_TO > ? AND r.ACTION_TYPE = ?;

SELECT e FROM PolicyDeploymentEntity e WHERE e.developmentId = ? AND e.overrideCount = ? AND e.activeTo > ?;

SELECT l.DEPLOYEMENT_ID, l.DEVELOPMENT_ID, l.ACTIVE_FROM, l.ACTIVE_TO, l.ACTION_TYPE, l.DEPLOY_ENT_COUNT FROM ( SELECT j.DEVELOPMENT_ID DEVELOPMENT_ID, ab.ID DEPLOYEMENT_ID, ab.ACTIVE_FROM ACTIVE_FROM , ab.ACTIVE_TO ACTIVE_TO, cd.ACTION_TYPE ACTION_TYPE, j.DEPLOY_ENT_COUNT DEPLOY_ENT_COUNT FROM DEPLOYMENT_ENTITIES ab INNER JOIN DEPLOYMENT_RECORDS cd ON (cd.ID = ab.DEP_RECORD_ID) INNER JOIN (SELECT k.DEVELOPMENT_ID, COUNT(k.DEVELOPMENT_ID) DEPLOY_ENT_COUNT FROM (SELECT de.DEVELOPMENT_ID, dr.ACTION_TYPE ACTION_TYPE, dr.DEPLOYMENT_TYPE DEPLOYMENT_TYPE FROM DEPLOYMENT_ENTITIES de INNER JOIN DEPLOYMENT_RECORDS dr ON(dr.ID = de.DEP_RECORD_ID) WHERE de.OVERRIDE_CNT = ? ) k GROUP BY k.DEVELOPMENT_ID ) j ON (j.DEVELOPMENT_ID = ab.DEVELOPMENT_ID AND ab.OVERRIDE_CNT = ?) ) l WHERE l.ACTIVE_TO > ? AND l.DEVELOPMENT_ID = ?;

SELECT NAME, SHORT_CODE, SHORT_NAME FROM PM_ACTION_CONFIG WHERE LOWER(SHORT_CODE) = ?;

SELECT short_code FROM PM_ACTION_CONFIG act LEFT JOIN POLICY_MODEL p on (act.plcy_model_id = p.id) WHERE p.discriminator != ? AND p.short_name = ? AND act.short_name = ? AND p.id = ?;

SELECT ID, NAME FROM APPLICATION_USER_DOMAIN d WHERE LOWER(d.NAME) = ?;

SELECT USERNAME FROM APPLICATION_USER a WHERE a.USER_TYPE = ? AND a.AUTH_HANDLER_ID = ?;

SELECT a.USERNAME, a.EMAIL FROM APPLICATION_USER a WHERE LOWER(a.email) = ? UNION SELECT s.USERNAME, s.EMAIL FROM SUPER_APPLICATION_USER s WHERE LOWER(s.email) = ?;

SELECT ID, USERNAME, FIRST_NAME, LAST_NAME, DOMAIN_ID, PRIMARY_GROUP_ID, LAST_LOGGED_TIME, HIDE_SPLASH, LAST_UPDATED, USER_TYPE, AUTH_HANDLER_ID    FROM APPLICATION_USER a WHERE a.status = ? OR a.AUTH_HANDLER_ID != ? UNION ALL SELECT ID, USERNAME, FIRST_NAME, LAST_NAME, DOMAIN_ID, PRIMARY_GROUP_ID, LAST_LOGGED_TIME, HIDE_SPLASH, LAST_UPDATED, 'internal', -1 from SUPER_APPLICATION_USER;

SELECT COUNT(ID) FROM APPLICATION_USER WHERE STATUS = ? AND AUTH_HANDLER_ID = ?;

SELECT o FROM OperatorConfig o WHERE o.dataType = ? ORDER BY o.label;

SELECT c FROM SavedSearch c WHERE lower(c.name) like ? AND c.status != 'DELETED' AND c.type = ? ORDER BY c.name;

SELECT p FROM AppUserProperties p WHERE p.userId = ? ORDER BY p.key;

SELECT p FROM AppUserProperties p WHERE p.superUserId = ? ORDER BY p.key;

SELECT a FROM AuditLog a WHERE a.ownerId = ? ORDER BY a.createdDate DESC;

SELECT a FROM AuditLog a ORDER BY a.createdDate DESC;

SELECT a FROM AuditLog a WHERE a.component = ? ORDER BY a.createdDate DESC;

SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count
FROM ((SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, ISNULL(ra1.allow_count, 0) allow_count
       FROM ((SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count
              from RPA_LOG ra
              WHERE policy_decision = 'A' AND day_nb >= ? AND day_nb <= ? GROUP BY ra.from_resource_name, ra.policy_decision) ra1

              RIGHT JOIN (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision
                          from RPA_LOG rp
                          WHERE day_nb >= ? AND day_nb <= ?
                          GROUP BY rp.from_resource_name) rp1
                  ON (rp1.from_resource_name = ra1.from_resource_name))) a1
              INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, ISNULL(rd1.deny_count, 0) deny_count
                            FROM ((SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count
                                   from RPA_LOG rd
                                   WHERE policy_decision = 'D' AND day_nb >= ? AND day_nb <= ?
                                   GROUP BY rd.from_resource_name, rd.policy_decision) rd1

                                   RIGHT JOIN (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision
                                               from RPA_LOG rp
                                               WHERE day_nb >= ? AND day_nb <= ?
                                               GROUP BY rp.from_resource_name) rp1
                                        ON (rp1.from_resource_name = rd1.from_resource_name))) d1
                  ON  (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC;

SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count FROM (   (SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, NVL(ra1.allow_count, 0) allow_count FROM (       (SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count from RPA_LOG ra               WHERE policy_decision = 'A' AND day_nb >= ? AND day_nb <= ? GROUP BY ra.from_resource_name, ra.policy_decision) ra1 RIGHT JOIN       (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision from RPA_LOG rp               WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1       ON (rp1.from_resource_name = ra1.from_resource_name))) a1    INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, NVL(rd1.deny_count, 0) deny_count FROM (      (SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count from RPA_LOG rd              WHERE policy_decision = 'D' AND day_nb >= ? AND day_nb <= ? GROUP BY rd.from_resource_name, rd.policy_decision) rd1 RIGHT JOIN      (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision from RPA_LOG rp              WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1      ON (rp1.from_resource_name = rd1.from_resource_name))) d1  ON (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC;

SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count FROM (   (SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, COALESCE(ra1.allow_count, 0) allow_count FROM (       (SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count from RPA_LOG ra               WHERE policy_decision = 'A' AND day_nb >= ? AND day_nb <= ? GROUP BY ra.from_resource_name, ra.policy_decision) ra1 RIGHT JOIN       (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision from RPA_LOG rp               WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1       ON (rp1.from_resource_name = ra1.from_resource_name))) a1    INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, COALESCE(rd1.deny_count, 0) deny_count FROM (      (SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count from RPA_LOG rd              WHERE policy_decision = 'D' AND day_nb >= ? AND day_nb <= ? GROUP BY rd.from_resource_name, rd.policy_decision) rd1 RIGHT JOIN      (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision from RPA_LOG rp              WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1      ON (rp1.from_resource_name = rd1.from_resource_name))) d1  ON (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC;

SELECT k.name, COUNT(k.name) FROM  (SELECT t.name, e.element_id  from DICT_LEAF_ELEMENTS e LEFT JOIN  DICT_ELEMENT_TYPES t ON (t.id = e.type_id)) k GROUP BY k.name;

SELECT e.id, e.domain_name, e.enrollment_type, e.isActive, u.start_time, u.end_time, u.is_successful, u.err_msg FROM DICT_ENROLLMENTS e  LEFT JOIN DICT_UPDATES u  ON (e.id = u.enrollment_id AND u.active_to > ?) ORDER BY u.end_time desc;

SELECT e.id, e.domain_name, e.enrollment_type, e.isActive, u.start_time, u.end_time, u.is_successful, u.err_msg FROM DICT_ENROLLMENTS e  LEFT JOIN DICT_UPDATES u  ON (e.id = u.enrollment_id AND u.active_to > ?) ORDER BY u.end_time desc;

SELECT id, name, type, typeDisplayName, lastHeartbeat, heartbeatRate FROM COMPONENT where type = ?;

SELECT id, name, type, typeDisplayName, lastHeartbeat, heartbeatRate FROM COMPONENT where type = ?;

SELECT a.id, a.host, a.type, a.registered, a.version, a.lastHeartbeat,  a.deployment_bundle_ts, c.heart_beat_freq_time, c.heart_beat_freq_time_unit, c.dabs_location  FROM AGENT a INNER JOIN COMM_PROFILE c ON (a.comm_profile_id = c.id) where a.registered = ?;

SELECT a.id, a.host, a.type, a.registered, a.version, a.lastHeartbeat,  a.deployment_bundle_ts, c.heart_beat_freq_time, c.heart_beat_freq_time_unit, c.dabs_location  FROM AGENT a INNER JOIN COMM_PROFILE c ON (a.comm_profile_id = c.id) where a.registered = ?;

SELECT MAX(as_of) last_deployment_record FROM DEPLOYMENT_RECORDS;

SELECT r.test time_unit, count(r.test) total_request FROM RPA_LOG r INNER JOIN (SELECT l.decision_request_id decision_request_id FROM RPA_LOG l WHERE l.request_date_time >= ? AND l.request_date_time <= ? GROUP BY l.decision_request_id) g ON ( g.decision_request_id = r.decision_request_id) GROUP BY r.test ORDER BY r.test;

SELECT DAY_NB, MONITOR_ID, MONITOR_NAME, count(MONITOR_NAME)  FROM ALERT WHERE DAY_NB >= ? AND DAY_NB <= ? GROUP BY DAY_NB, MONITOR_ID, MONITOR_NAME ORDER BY DAY_NB;

SELECT r.user_id user_id, r.user_name, count(r.user_id) total_count from RPA_LOG r      WHERE r.policy_decision = ? AND r.day_nb >= ? AND r.day_nb <= ?       GROUP BY r.user_id, r.user_name ORDER BY total_count desc;

SELECT r.user_id user_id, r.user_name, count(r.user_id) total_count from RPA_LOG r      WHERE r.policy_decision = ? AND r.day_nb >= ? AND r.day_nb <= ?       GROUP BY r.user_id, r.user_name ORDER BY total_count desc;

SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count FROM (   (SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, ISNULL(ra1.allow_count, 0) allow_count FROM (       (SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count from RPA_LOG ra               WHERE policy_decision = 'A' AND day_nb >= ? AND day_nb <= ? GROUP BY ra.from_resource_name, ra.policy_decision) ra1 RIGHT JOIN       (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision from RPA_LOG rp               WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1       ON (rp1.from_resource_name = ra1.from_resource_name))) a1    INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, ISNULL(rd1.deny_count, 0) deny_count FROM (      (SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count from RPA_LOG rd              WHERE policy_decision = 'D' AND day_nb >= ? AND day_nb <= ? GROUP BY rd.from_resource_name, rd.policy_decision) rd1 RIGHT JOIN      (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision from RPA_LOG rp              WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1      ON (rp1.from_resource_name = rd1.from_resource_name))) d1  ON  (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC;

SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count FROM (   (SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, NVL(ra1.allow_count, 0) allow_count FROM (       (SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count from RPA_LOG ra               WHERE policy_decision = 'A' AND day_nb >= ? AND day_nb <= ? GROUP BY ra.from_resource_name, ra.policy_decision) ra1 RIGHT JOIN       (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision from RPA_LOG rp               WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1       ON (rp1.from_resource_name = ra1.from_resource_name))) a1    INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, NVL(rd1.deny_count, 0) deny_count FROM (      (SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count from RPA_LOG rd              WHERE policy_decision = 'D' AND day_nb >= ? AND day_nb <= ? GROUP BY rd.from_resource_name, rd.policy_decision) rd1 RIGHT JOIN      (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision from RPA_LOG rp              WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1      ON (rp1.from_resource_name = rd1.from_resource_name))) d1  ON (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC;

SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count FROM (   (SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, COALESCE(ra1.allow_count, 0) allow_count FROM (       (SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count from RPA_LOG ra               WHERE policy_decision = 'A' AND day_nb >= ? AND day_nb <= ? GROUP BY ra.from_resource_name, ra.policy_decision) ra1 RIGHT JOIN       (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision from RPA_LOG rp               WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1       ON (rp1.from_resource_name = ra1.from_resource_name))) a1    INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, COALESCE(rd1.deny_count, 0) deny_count FROM (      (SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count from RPA_LOG rd              WHERE policy_decision = 'D' AND day_nb >= ? AND day_nb <= ? GROUP BY rd.from_resource_name, rd.policy_decision) rd1 RIGHT JOIN      (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision from RPA_LOG rp              WHERE day_nb >= ? AND day_nb <= ?  GROUP BY rp.from_resource_name) rp1      ON (rp1.from_resource_name = rd1.from_resource_name))) d1  ON (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC;

SELECT policy_fullname, policy_name, policy_decision, COUNT(policy_fullname) total_count FROM RPA_LOG r  WHERE day_nb >= ? AND day_nb <= ?  GROUP BY policy_fullname, policy_name, policy_decision ORDER BY total_count DESC;

SELECT l.fullname, l.deployer FROM   (SELECT d.name fullname, d.submitter deployer, k.policy_fullname policy_fullname FROM DEVELOPMENT_ENTITIES d LEFT JOIN     (SELECT r.policy_fullname policy_fullname FROM RPA_LOG r       WHERE r.day_nb >= ? AND r.day_nb <= ? GROUP BY r.policy_fullname) k   ON (k.policy_fullname = CONCAT('/', d.name)) WHERE d.type = 'PO' AND d.status = 'AP' AND d.hidden = 'N') l WHERE l.policy_fullname is null;

SELECT DAY_NB, POLICY_DECISION, count(ID) FROM RPA_LOG  WHERE DAY_NB >= ? AND DAY_NB <= ? AND POLICY_DECISION = ? GROUP BY DAY_NB, POLICY_DECISION ORDER BY DAY_NB;

SELECT a.ID, a.HOST, a.TYPE, a.REGISTERED, a.LASTHEARTBEAT, a.DEPLOYMENT_BUNDLE_TS,  c.HEART_BEAT_FREQ_TIME, c.HEART_BEAT_FREQ_TIME_UNIT FROM AGENT a INNER JOIN  COMM_PROFILE c  on (a.COMM_PROFILE_ID = c.ID) WHERE a.REGISTERED = ?;

SELECT e.id, e.DOMAIN_NAME , e.ENROLLMENT_TYPE , u.IS_SUCCESSFUL, u.ERR_MSG, u.ACTIVE_FROM FROM DICT_ENROLLMENTS e LEFT JOIN DICT_UPDATES u  ON ( e.ID = u.ENROLLMENT_ID) WHERE ACTIVE_TO >= ?;

SELECT ID, NAME FROM MONITOR WHERE IS_ACTIVE = ?;

SELECT COUNT(*) FROM ARCHIVE_POLICY_ACTIVITY_LOG;

SELECT COUNT(*) FROM POLICY_ACTIVITY_LOG;

SELECT COUNT(*) FROM POLICY_ACTIVITY_LOG WHERE DAY_NB >=  ? AND DAY_NB <= ?;

SELECT t FROM TagLabel t WHERE t.type = ? ORDER BY t.label;

SELECT t FROM TagLabel t WHERE lower(t.key) = ? AND t.type = ? ORDER BY t.label;

SELECT e FROM PolicyDevelopmentEntity e WHERE e.type = ?;

SELECT e FROM PolicyDevelopmentEntity e WHERE e.hidden = ? AND e.status != ? AND e.type = ?;

SELECT t FROM AuthHandlerTypeDetail t WHERE t.type = ? ORDER BY t.type;


SELECT ID, USERNAME, FIRST_NAME, LAST_NAME, DOMAIN_ID, PRIMARY_GROUP_ID, LAST_LOGGED_TIME, HIDE_SPLASH, LAST_UPDATED, EMAIL FROM SUPER_APPLICATION_USER a WHERE LOWER(a.username) = ?;

INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'GET', '/api/v1/sysconfig/getUIConfigs', 'authenticated');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'GET', '/api/v1/sysconfig/reset', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'POST', '/api/v1/sysconfig/search', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'POST', '/api/v1/sysconfig/update', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'GET', '/api/v1/sysconfig/get', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');

INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'POST', '/api/v1/loggerConfiguration/save', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'GET', '/api/v1/loggerConfiguration/findAll', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'POST', '/api/v1/loggerConfiguration/delete', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'GET', '/api/v1/loggerConfiguration/refresh', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'POST', '/api/v1/loggerHandler/save', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'GET', '/api/v1/loggerHandler/findAll', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');
INSERT INTO ACCESS_CONTROL (ID, REQUEST_METHOD, URL_PATTERN, EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL, 'POST', '/api/v1/loggerHandler/delete', 'hasAnyAuthority(''VIEW_ADMINISTRATOR'')');

INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'console','policy-evaluation','INFO',0,0,'Control Center Console Policy Evaluation Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'console','org.springframework','WARN',0,0,'Control Center Console Spring Framework Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'console','com.mchange','ERROR',0,0,'Control Center Console Database Connection Pool Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'console','com.nextlabs.destiny.console','INFO',0,0,'Control Center Console Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'console','com.bluejungle.pf.engine.destiny','INFO',0,0,'Control Center Console Base Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'console','com.bluejungle.destiny.agent.controlmanager','INFO',0,0,'Control Center Console Agent Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'console','com.nextlabs.destiny.console.AuditLogger','INFO',0,0,'Control Center Console Audit Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'config-service','com.nextlabs.destiny.configservice','INFO',0,0,'Control Center Configuration Service Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'config-service','org.springframework','INFO',0,0,'Control Center Configuration Service Spring Framework Logger');
INSERT INTO LOGGER_CONFIGURATION (ID,APPLICATION,NAME,LOG_LEVEL,PARENT,CUSTOM,DISPLAY_NAME) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'config-service','com.mchange','INFO',0,0,'Control Center Configuration Service Database Connection Pool Logger');

INSERT INTO LOGGER_HANDLER (ID,NAME,LOG_LEVEL,TYPE,APPEND,FILE_NAME,FILE_LIMIT,FILE_COUNT,CUSTOM) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'Server Console','WARN','CONSOLE',NULL,NULL,NULL,NULL,0);
INSERT INTO LOGGER_HANDLER (ID,NAME,LOG_LEVEL,TYPE,APPEND,FILE_NAME,FILE_LIMIT,FILE_COUNT,CUSTOM) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'Control Center Console File Handler','ALL','FILE',1,'console',500000,10,0);
INSERT INTO LOGGER_HANDLER (ID,NAME,LOG_LEVEL,TYPE,APPEND,FILE_NAME,FILE_LIMIT,FILE_COUNT,CUSTOM) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'Control Center Configuration Service File Handler','ALL','FILE',1,'configservice',500000,10,0);

INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'console' AND NAME = 'org.springframework'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Console File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'console' AND NAME = 'com.mchange'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Console File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'console' AND NAME = 'com.nextlabs.destiny.console'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Console File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'console' AND NAME = 'com.bluejungle.destiny.agent.controlmanager'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Console File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'console' AND NAME = 'policy-evaluation'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Console File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'console' AND NAME = 'com.bluejungle.pf.engine.destiny'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Console File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'config-service' AND NAME = 'com.nextlabs.destiny.configservice'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Configuration Service File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'config-service' AND NAME = 'org.springframework'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Configuration Service File Handler'));
INSERT INTO LOGGER_HANDLER_CONFIGURATION(LOGGER_ID, HANDLER_ID)  VALUES((SELECT MAX(ID) FROM LOGGER_CONFIGURATION WHERE APPLICATION = 'config-service' AND NAME = 'com.mchange'), (SELECT MAX(ID) FROM LOGGER_HANDLER WHERE NAME = 'Control Center Configuration Service File Handler'));

INSERT INTO
OPERATOR_CONFIG(id, created_date, last_updated_by, last_updated, created_by, version, data_type, operator_key, label)
VALUES
(HIBERNATE_SEQUENCE.NEXTVAL, sysdate, 0, sysdate, 0, 0, 'DATE', '<', 'before');

INSERT INTO
OPERATOR_CONFIG(id, created_date, last_updated_by, last_updated, created_by, version, data_type, operator_key, label)
VALUES
(HIBERNATE_SEQUENCE.NEXTVAL,sysdate, 0, sysdate, 0, 0, 'DATE', '>=', 'on or after');

UPDATE ACCESS_CONTROL SET URL_PATTERN = '/api/v1/policyModel/mgmt/extraSubjectAttribs/{type:[A-Za-z]+}' WHERE REQUEST_METHOD = 'GET' AND URL_PATTERN = '/api/v1/policyModel/mgmt/extraSubjectAttribs/{type:[A-Z]+}';

INSERT INTO ACCESS_CONTROL (ID,REQUEST_METHOD,URL_PATTERN,EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'GET','/swagger-ui.html','authenticated');
INSERT INTO ACCESS_CONTROL (ID,REQUEST_METHOD,URL_PATTERN,EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'GET','/webjars/springfox-swagger-ui/**','authenticated');
INSERT INTO ACCESS_CONTROL (ID,REQUEST_METHOD,URL_PATTERN,EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'GET','/swagger-resources','authenticated');
INSERT INTO ACCESS_CONTROL (ID,REQUEST_METHOD,URL_PATTERN,EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'GET','/swagger-resources/**','authenticated');
INSERT INTO ACCESS_CONTROL (ID,REQUEST_METHOD,URL_PATTERN,EXPRESSION) VALUES (HIBERNATE_SEQUENCE.NEXTVAL,'GET','/api-docs','authenticated');

-- DDAC component has been removed
DELETE FROM COMPONENT WHERE type LIKE 'DDAC';

UPDATE APPLICATION_USER
SET USERNAME = USERNAME || '_' || TO_CHAR(LAST_UPDATED, 'YYMMDDHHMISS'),
LAST_NAME = LAST_NAME || ' (deactivated ' || TO_CHAR(LAST_UPDATED, 'DD Mon YYYY') || ')',
DISPLAYNAME = DISPLAYNAME || ' (deactivated ' || TO_CHAR(LAST_UPDATED, 'DD Mon YYYY') || ')'
WHERE STATUS = 'DELETED';

-- Remove references to ACTIVE_DIRECTORY agent type
DELETE FROM COMM_PROFILE WHERE agent_type LIKE 'ACTIVE_DIRECTORY';

DELETE FROM COMM_PROFILE_SEED_ITEMS WHERE SEED_NAME LIKE 'DefaultCommProfile_ACTIVE_DIRECTORY';

SELECT USERNAME, FIRST_NAME, LAST_NAME, DOMAIN_ID, PRIMARY_GROUP_ID, PASSWORD, INITLOGIN_DONE, LOCKED, FAILED_LOGIN_ATTEMPTS FROM SUPER_APPLICATION_USER
UNION ALL
SELECT USERNAME, FIRST_NAME, LAST_NAME, DOMAIN_ID, PRIMARY_GROUP_ID, password, INITLOGIN_DONE, LOCKED, FAILED_LOGIN_ATTEMPTS FROM APPLICATION_USER
  WHERE STATUS != 'DELETED' AND NOT EXISTS (
  	SELECT USERNAME FROM SUPER_APPLICATION_USER WHERE APPLICATION_USER.USERNAME = SUPER_APPLICATION_USER.USERNAME
  );


SELECT 0 AS id, policy_log_id, attribute_type, attribute_name, attribute_value  FROM
(SELECT
temp.id AS policy_log_id,
temp.attr_type AS attribute_type,
map.name AS attribute_name,
temp.attribute_value
FROM
(SELECT
   Y.id,
   X.attr_type,
   X.mapped_column,
    CASE X.mapped_column
	WHEN 'attr1' THEN Y.attr1
	WHEN 'attr2' THEN Y.attr2
	WHEN 'attr3' THEN Y.attr3
	WHEN 'attr4' THEN Y.attr4
	WHEN 'attr5' THEN Y.attr5
	WHEN 'attr6' THEN Y.attr6
	WHEN 'attr7' THEN Y.attr7
	WHEN 'attr8' THEN Y.attr8
	WHEN 'attr9' THEN Y.attr9
	WHEN 'attr10' THEN Y.attr10
	WHEN 'attr11' THEN Y.attr11
	WHEN 'attr12' THEN Y.attr12
	WHEN 'attr13' THEN Y.attr13
	WHEN 'attr14' THEN Y.attr14
	WHEN 'attr15' THEN Y.attr15
	WHEN 'attr16' THEN Y.attr16
	WHEN 'attr17' THEN Y.attr17
	WHEN 'attr18' THEN Y.attr18
	WHEN 'attr19' THEN Y.attr19
	WHEN 'attr20' THEN Y.attr20
	WHEN 'attr21' THEN Y.attr21
	WHEN 'attr22' THEN Y.attr22
	WHEN 'attr23' THEN Y.attr23
	WHEN 'attr24' THEN Y.attr24
	WHEN 'attr25' THEN Y.attr25
	WHEN 'attr26' THEN Y.attr26
	WHEN 'attr27' THEN Y.attr27
	WHEN 'attr28' THEN Y.attr28
	WHEN 'attr29' THEN Y.attr29
	WHEN 'attr30' THEN Y.attr30
	WHEN 'attr31' THEN Y.attr31
	WHEN 'attr32' THEN Y.attr32
	WHEN 'attr33' THEN Y.attr33
	WHEN 'attr34' THEN Y.attr34
	WHEN 'attr35' THEN Y.attr35
	WHEN 'attr36' THEN Y.attr36
	WHEN 'attr37' THEN Y.attr37
	WHEN 'attr38' THEN Y.attr38
	WHEN 'attr39' THEN Y.attr39
	WHEN 'attr40' THEN Y.attr40
	WHEN 'attr41' THEN Y.attr41
	WHEN 'attr42' THEN Y.attr42
	WHEN 'attr43' THEN Y.attr43
	WHEN 'attr44' THEN Y.attr44
	WHEN 'attr45' THEN Y.attr45
	WHEN 'attr46' THEN Y.attr46
	WHEN 'attr47' THEN Y.attr47
	WHEN 'attr48' THEN Y.attr48
	WHEN 'attr49' THEN Y.attr49
	WHEN 'attr50' THEN Y.attr50
	WHEN 'attr51' THEN Y.attr51
	WHEN 'attr52' THEN Y.attr52
	WHEN 'attr53' THEN Y.attr53
	WHEN 'attr54' THEN Y.attr54
	WHEN 'attr55' THEN Y.attr55
	WHEN 'attr56' THEN Y.attr56
	WHEN 'attr57' THEN Y.attr57
	WHEN 'attr58' THEN Y.attr58
	WHEN 'attr59' THEN Y.attr59
	WHEN 'attr60' THEN Y.attr60
	WHEN 'attr61' THEN Y.attr61
	WHEN 'attr62' THEN Y.attr62
	WHEN 'attr63' THEN Y.attr63
	WHEN 'attr64' THEN Y.attr64
	WHEN 'attr65' THEN Y.attr65
	WHEN 'attr66' THEN Y.attr66
	WHEN 'attr67' THEN Y.attr67
	WHEN 'attr68' THEN Y.attr68
	WHEN 'attr69' THEN Y.attr69
	WHEN 'attr70' THEN Y.attr70
	WHEN 'attr71' THEN Y.attr71
	WHEN 'attr72' THEN Y.attr72
	WHEN 'attr73' THEN Y.attr73
	WHEN 'attr74' THEN Y.attr74
	WHEN 'attr75' THEN Y.attr75
	WHEN 'attr76' THEN Y.attr76
	WHEN 'attr77' THEN Y.attr77
	WHEN 'attr78' THEN Y.attr78
	WHEN 'attr79' THEN Y.attr79
	WHEN 'attr80' THEN Y.attr80
	WHEN 'attr81' THEN Y.attr81
	WHEN 'attr82' THEN Y.attr82
	WHEN 'attr83' THEN Y.attr83
	WHEN 'attr84' THEN Y.attr84
	WHEN 'attr85' THEN Y.attr85
	WHEN 'attr86' THEN Y.attr86
	WHEN 'attr87' THEN Y.attr87
	WHEN 'attr88' THEN Y.attr88
	WHEN 'attr89' THEN Y.attr89
	WHEN 'attr90' THEN Y.attr90
	WHEN 'attr91' THEN Y.attr91
	WHEN 'attr92' THEN Y.attr92
	WHEN 'attr93' THEN Y.attr93
	WHEN 'attr94' THEN Y.attr94
	WHEN 'attr95' THEN Y.attr95
	WHEN 'attr96' THEN Y.attr96
	WHEN 'attr97' THEN Y.attr97
	WHEN 'attr98' THEN Y.attr98
	WHEN 'attr99' THEN Y.attr99
	END AS attribute_value
FROM
   rpa_log  Y CROSS JOIN  (select mapped_column, attr_type FROM rpa_log_mapping where mapped_column is NOT NULL) X) temp
JOIN rpa_log_mapping  map on temp.mapped_column = map.mapped_column
WHERE temp.attribute_value IS NOT NULL

UNION ALL

SELECT policy_log_id, map.name AS attribute_name, attr_value AS attribute_value, attr_type as attribute_type from rpa_log_attr rla
JOIN rpa_log_mapping map on rla.attr_id = map.id) results;

SELECT
    id as id,
    ref_log_id as policy_log_id,
    name as name,
    attr_one as attribute_one,
    attr_two as attribute_two,
    attr_three as attribute_three
FROM report_obligation_log;

SELECT
    id as id,
    tracking_log_id as tracking_log_id,
    attribute_name as attribute_name,
    attribute_value as attribute_value
FROM report_tracking_custom_attr;

SELECT
    id as id,
	host_id as host_id,
	host_ip as host_ip,
    host_name as host_name,
	user_id as user_id,
    user_name as user_name,
    user_sid as user_sid,
	application_id as application_id,
    application_name as application_name,
    action as action,
	policy_id as policy_id,
    policy_fullname as policy_full_name,
	policy_name as policy_name,
    policy_decision as policy_decision,
	decision_request_id as decision_request_id,
    log_level as log_level,
    from_resource_name as source_resource_name,
	from_resource_size as source_resource_size,
    from_resource_prefix as source_resource_prefix,
    from_resource_path as source_resource_path,
    from_resource_short_name as source_resource_short_name,
    from_resource_owner_id as source_resource_owner_id,
    from_resource_created_date as source_resource_create_date,
	from_resource_modified_date as source_resource_modified_date,
    to_resource_name as target_resource_name,
	attr1 as attr1,
	attr2 as attr2,
	attr3 as attr3,
	attr4 as attr4,
	attr5 as attr5,
	attr6 as attr6,
	attr7 as attr7,
	attr8 as attr8,
	attr9 as attr9,
	attr10 as attr10,
	attr11 as attr11,
	attr12 as attr12,
	attr13 as attr13,
	attr14 as attr14,
	attr15 as attr15,
	attr16 as attr16,
	attr17 as attr17,
	attr18 as attr18,
	attr19 as attr19,
	attr20 as attr20,
	attr21 as attr21,
	attr22 as attr22,
	attr23 as attr23,
	attr24 as attr24,
	attr25 as attr25,
	attr26 as attr26,
	attr27 as attr27,
	attr28 as attr28,
	attr29 as attr29,
	attr30 as attr30,
	attr31 as attr31,
	attr32 as attr32,
	attr33 as attr33,
	attr34 as attr34,
	attr35 as attr35,
	attr36 as attr36,
	attr37 as attr37,
	attr38 as attr38,
	attr39 as attr39,
	attr40 as attr40,
	attr41 as attr41,
	attr42 as attr42,
	attr43 as attr43,
	attr44 as attr44,
	attr45 as attr45,
	attr46 as attr46,
	attr47 as attr47,
	attr48 as attr48,
	attr49 as attr49,
	attr50 as attr50,
	attr51 as attr51,
	attr52 as attr52,
	attr53 as attr53,
	attr54 as attr54,
	attr55 as attr55,
	attr56 as attr56,
	attr57 as attr57,
	attr58 as attr58,
	attr59 as attr59,
	attr60 as attr60,
	attr61 as attr61,
	attr62 as attr62,
	attr63 as attr63,
	attr64 as attr64,
	attr65 as attr65,
	attr66 as attr66,
	attr67 as attr67,
	attr68 as attr68,
	attr69 as attr69,
	attr70 as attr70,
	attr71 as attr71,
	attr72 as attr72,
	attr73 as attr73,
	attr74 as attr74,
	attr75 as attr75,
	attr76 as attr76,
	attr77 as attr77,
	attr78 as attr78,
	attr79 as attr79,
	attr80 as attr80,
	attr81 as attr81,
	attr82 as attr82,
	attr83 as attr83,
	attr84 as attr84,
	attr85 as attr85,
	attr86 as attr86,
	attr87 as attr87,
	attr88 as attr88,
	attr89 as attr89,
	attr90 as attr90,
	attr91 as attr91,
	attr92 as attr92,
	attr93 as attr93,
	attr94 as attr94,
	attr95 as attr95,
	attr96 as attr96,
	attr97 as attr97,
	attr98 as attr98,
	attr99 as attr99
FROM rpa_log;

SELECT
    policy_log_id as policy_log_id,
    attr_id as attr_id,
    attr_value as attr_value
FROM rpa_log_attr;

SELECT
    mapped_column as mapped_column,
    name as name,
    data_type as data_type,
    attr_type as attr_type
FROM rpa_log_mapping;

















