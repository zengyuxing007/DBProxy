
FLUSH QUERY_RESPONSE_TIME;
# Following two queries check works of FLUSH and 
# respecting of "QUERY_RESPONSE_TIME_STATS" variable (see launchpad bug #855312)
SHOW QUERY_RESPONSE_TIME;
SELECT * FROM INFORMATION_SCHEMA.QUERY_RESPONSE_TIME;




SHOW GLOBAL VARIABLES where Variable_name like 'QUERY_RESPONSE_TIME_RANGE_BASE';
SHOW QUERY_RESPONSE_TIME;
SELECT * FROM INFORMATION_SCHEMA.QUERY_RESPONSE_TIME;

