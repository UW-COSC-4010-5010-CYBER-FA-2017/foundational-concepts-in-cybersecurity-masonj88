## Domain Separation ##

### Example ###
In the example, there are 3 users that each have a database on the system.
Each of the three should not have access to each other's databases.
In this example, this is achieved by making sure each user is authorized, and
then only allowing the authorized user to access their own database.


### Non-Example ###
In the non-example, each user is authenticated, but then has access to all databases on the system.