IF OBJECT_ID('NXL_USER.DBO.USERS','U') is not null
    Drop table NXL_USER.dbo.users;

CREATE TABLE NXL_USER.DBO.USERS (
user_id int IDENTITY (1,1) PRIMARY KEY ,
user_name nVarChar(128) ,
level int default 0,
age int,
title nVarChar(50) default ''
);

INSERT INTO NXL_USER.DBO.USERS
       (user_name, level, age, title)
VALUES ('sa',      0,      45, 'manager'),
       ('guest',   2,      24, 'employee')