
# POWER-THEFT-DETECTION
Power theft is the problem since the inception of household electricity supply.
It is normally done by two methods that is bypassing or hooking.
In our project, the household distribution of current is done indirectly from the electric pole to an intermediate Theft Protection System and then to the individual houses.
The current is measured periodically by the current sensor and is posted to the cloud database for each house using the microcontroller. 
Similarly, for each house electric meter is designed which can measure the value of the current and post the same to the cloud database periodically using NodeMCU. 
At the time of the installation of the electric meter the details of the users are stored in the database including the address. 
Upon successful comparison between the current values from the pole and electric meter in the server if we get a marginal difference between the currents then the theft is detected.
Finally, the details of the user are shared with the cloud including the address of the area.
A message is sent to the Electricity board of the area and hence the required steps are taken. 
The same process is used for hooking. 


