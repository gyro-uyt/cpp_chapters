-- INSERT INTO users VALUES
-- ('2004-01-30',129,'shivam@putra.com','shivu','male',default);

insert into users(name, email, gender, date_of_birth) values
('Harry1 Don', 'don3@king.com', 'male', '2012-03-13'),
('Harry2 Don', 'don4@king.com', 'male', '2012-03-13'),
('Harry3 Don', 'don5@king.com', 'male', '2012-03-13'),
('Harry4 Don', 'don6@king.com', 'male', '2012-03-13');
-- this is more efficient than doing one by one

select * from users;