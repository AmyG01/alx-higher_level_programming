-- Task: Display the maximum temperature of each state (ordered by State name)

-- Query: Retrieve maximum temperature by state

SELECT State, MAX(Temperature) AS max_temperature
FROM hbtn_0c_0.table_name
GROUP BY State
ORDER BY State;
