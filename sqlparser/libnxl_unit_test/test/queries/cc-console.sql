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

SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, ISNULL(ra1.allow_count, 0) allow_count
FROM  ((SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count
        from RPA_LOG ra
        WHERE policy_decision = 'A' AND day_nb >= ? AND day_nb <= ?
        GROUP BY ra.from_resource_name, ra.policy_decision) ra1

        RIGHT JOIN (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision
                    from RPA_LOG rp
                    WHERE day_nb >= ? AND day_nb <= ?
                    GROUP BY rp.from_resource_name) rp1
        ON (rp1.from_resource_name = ra1.from_resource_name))

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

SELECT a1.from_resource_name, a1.allow_count, d1.deny_count, (a1.allow_count + d1.deny_count) total_count FROM (   (SELECT rp1.from_resource_name from_resource_name, ra1.allow_decision decision, NVL(ra1.allow_count, 0) allow_count FROM (       (SELECT ra.from_resource_name from_resource_name, ra.policy_decision allow_decision, count(ra.from_resource_name) allow_count from RPA_LOG ra               WHERE policy_decision = 'A' AND day_nb >= :fromDate AND day_nb <= :toDate GROUP BY ra.from_resource_name, ra.policy_decision) ra1 RIGHT JOIN       (SELECT rp.from_resource_name from_resource_name, 'A' deny_decision from RPA_LOG rp               WHERE day_nb >= :fromDate AND day_nb <= :toDate  GROUP BY rp.from_resource_name) rp1       ON (rp1.from_resource_name = ra1.from_resource_name))) a1    INNER JOIN   (SELECT rp1.from_resource_name from_resource_name, rp1.deny_decision decision, NVL(rd1.deny_count, 0) deny_count FROM (      (SELECT rd.from_resource_name from_resource_name, rd.policy_decision deny_decision, count(rd.from_resource_name) deny_count from RPA_LOG rd              WHERE policy_decision = 'D' AND day_nb >= :fromDate AND day_nb <= :toDate GROUP BY rd.from_resource_name, rd.policy_decision) rd1 RIGHT JOIN      (SELECT rp.from_resource_name from_resource_name, 'D' deny_decision from RPA_LOG rp              WHERE day_nb >= :fromDate AND day_nb <= :toDate  GROUP BY rp.from_resource_name) rp1      ON (rp1.from_resource_name = rd1.from_resource_name))) d1  ON (a1.from_resource_name = d1.from_resource_name)) ORDER BY total_count DESC;





