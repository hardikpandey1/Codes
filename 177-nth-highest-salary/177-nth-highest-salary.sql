CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      SELECT M.SALARY FROM(SELECT SALARY, DENSE_RANK() OVER(ORDER BY SALARY DESC)'RANK' FROM EMPLOYEE) M
      WHERE M.RANK=N LIMIT 1
  );
END