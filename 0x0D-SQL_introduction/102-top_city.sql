-- Task: Display the average temperature (Fahrenheit) by city ordered by temperature (descending)
-- Query: Retrieve average temperature by city

SELECT city, AVG(temperature) AS average_temperature
FROM hbtn_0c_0
GROUP BY city
ORDER BY average_temperature DESC;
