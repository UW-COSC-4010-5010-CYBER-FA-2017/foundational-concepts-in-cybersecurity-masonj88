## Least Privilege ##

### Example ###
In the example, there are two levels of access to a simulated database system, administrator and user access.
The Administrator has access to all databases, but each user only has access to their own database. This ensures
that only those who absolutely need access to a system, file, etc. have access.  This reduces the possible avenues
of attack.

### Non-Example ###
In the non-example, all users have access to all the databases.  Although users may never enter another user's database,
if any user is compromised, the attacker has access to all of the databases, instead of just that user's.



###### Image Source ######
https://docs.oracle.com/cd/A91202_01/901_doc/network.901/a90148/scn81082.gif