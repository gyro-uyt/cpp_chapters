CREATE DATABASE temp;

USE temp;

CREATE TABLE student (
    id INT PRIMARY KEY,
    name VARCHAR(255)
);

INSERT INTO student VALUES(1,'Ankit');
INSERT INTO student VALUES(2,'Uttam');
INSERT INTO student VALUES(3,'Abhay');

SELECT * FROM student;

