# Design Patterns Project - The 6 Musketeers

## About
Our team was given the task to assist Elon Musk and his team to design a system to simulate SpaceX and Starlink. The final product will contribute to the planning and optimising that is put towards their launches. The Six Musketeers need to figure out a way in order to optimise the cost of each launch by choosing the best rocket configuration for the job. There are 2 rockets (the Falcon9 and the Falcon Heavy), 2 spacecrafts (the Crew Dragon and the Dragon) and the Starlink satellites that orbit around the planet in order to provide fast internet to everyone around the world.
Our crew of computer scientists has decided to code a simulation of a rocket. During our studies, we were taught about design patterns and we all knew that they would be the most helpful tool in making our dream of helping thee Elon Musk become a reality. As soon as we got our initial design planned out, we got to work.
<br>
 
## Code Source
The code base is contained in a compressed file called System.zip. It contains a 'main.cpp', 'makefile' and all the necessary (.h and .cpp) source files for the program to compile and run, as well as the relevant source files necessary for Google unit tests.
<br>
 

## Compile and Run
> ##### 1: Extract the contents of the System.zip file.
> ##### 2: Open the command prompt (Windows) or terminal (Linux) and navigate to the directory of the extracted content.
> ##### 3: Type the command "make" to initialize the compilation operation of the makefile
> ##### 4: Type "make run" compile and start the program execution
<br>
 
 
## Program Guide: Construction
 
### Construction of a Crew Dragon
#### "What kind of rocket would you like to build?"
> [press 1] for Falcon 9 (single core rocket body) or [press 2] for Falcon Heavy (3-core rocket body) <br>
#### "Would you like to add a capsule?" 
> [press 1] for Yes and [press 2] for No. Option 1 allows you to choose any of the Dragon capsule variants or alternatively a batch of Starlink satellites. <br>
> Option 2 gives you a rocket without anything attached.
#### [Yes]: "What kind of capsule would you like to build?"
> [press 1] for Crew Dragon: this carries passengers to the ISS launch thrust rate is reduced to minimize G-forces for humans. <br>
> [press 2] for Cargo Dragon: Carries supplies to the ISS, rocket thrust is at maximum for better fuel efficiency. <br>
> [press 3] for Fairing: An aerodynamic cover which houses up to 60 Starlink Satellites. Can only be built on a Falcon 9 <br>
#### [1] "How many passengers are there? The maximum amount of passengers is 7"
> Requires an integer input between 0 and 7
#### "Input the name of passenger number *n* "
> Submit a passenger name for each member on the capsule
#### "What is the payload weight of the capsule?"
> Enter the weight of the payload. Must be a positive real number
 <br>
 <br>
 <br>
 
### Construction of a Cargo Dragon
#### "What kind of rocket would you like to build?"
> [press 1] for Falcon 9 (single core rocket body) or [press 2] for Falcon Heavy (3-core rocket body) <br>
#### "Would you like to add a capsule?" 
> [press 1] for Yes and [press 2] for No. Option 1 allows you to choose any of the Dragon capsule variants or alternatively a batch of Starlink satellites. <br>
> Option 2 gives you a rocket without anything attached.
#### [Yes]: "What kind of capsule would you like to build?"
> [press 1] for Crew Dragon: this carries passengers to the ISS launch thrust rate is reduced to minimize G-forces for humans. <br>
> [press 2] for Cargo Dragon: Carries supplies to the ISS, rocket thrust is at maximum for better fuel efficiency. <br>
> [press 3] for Fairing: An aerodynamic cover which houses up to 60 Starlink Satellites. Can only be built on a Falcon 9 <br>
#### [2] "What is the payload weight of the capsule?"
> Enter the weight of the payload. Must be a positive real number
 <br>
 <br>
 <br>
 
### Construction of a Fairing
#### "What kind of rocket would you like to build?"
> [press 1] for Falcon 9 (single core rocket body) <br>
#### "Would you like to add a capsule?" 
> [press 1] for Yes and [press 2] for No. Option 1 allows you to choose any of the Dragon capsule variants or alternatively a batch of Starlink satellites. <br>
> Option 2 gives you a rocket without anything attached.
#### [Yes]: "What kind of capsule would you like to build?"
> [press 1] for Crew Dragon: this carries passengers to the ISS launch thrust rate is reduced to minimize G-forces for humans. <br>
> [press 2] for Cargo Dragon: Carries supplies to the ISS, rocket thrust is at maximum for better fuel efficiency. <br>
> [press 3] for Fairing: An aerodynamic cover which houses up to 60 Starlink Satellites. Can only be built on a Falcon 9 <br>
#### [3] "How many satellites are there? The maximum amount of satellites is 60"
> Provide a positive integer amount between 0 and 60 <br>
#### "What is the payload weight of the capsule?" 
> Enter the weight of the payload. Must be a positive real number
 <br>
 <br>
 <br>

## Program Guide: Simulation
#### "Would you like to build a new simulation or use a pre made one?"
> [press 1] Build My Own : creates and stores new user defined simulation <br>
> [press 2] Pre-made : use the default. Automatically generated <br>
> [press 3] Restore your most recent rocket : recreate from last build <br>
> [press 4] Run all your saved simulations : batch run <br>
#### [1]: "What would you like stage 1 to do?"
> [press 1] Static-Fire Test : tests all the Merlin engines attached to the rocket core <br>
> [press 2] Jettison Fairing : open Fairing to expose satellites <br>
> [press 3] Seperate Boosters : initiates next stage <br>
> [press 4] Distribute Satellites : Spin and decouples all satellites to spread them out over time <br>
> [press 5] Deliver Crew : command sent to Capsule to transport cre to/from ISS <br>
> [press 6] Use Communications Network : see Communications Network below <br>
> [press 7] Fire Merlin Engines : Ignites all engines simultaneously <br>
> [press 8] Fire Vacuum Merlin Engines: Ignites all second stage engines <br>
#### [2]: "Would you like to launch your rocket?"
> Input 'y' [Yes] or 'n' [No] <br>
#### [After]: "Would you like to make another rocket?"
> Gives you the option to start this process from the start again <br>
#### [If retreiving a simulation]: "What would you like to do with your simulation?"
> [press 1] Add another stage : increase the stage count <br>
> [press 2] Edit Simulation : Tweak aspects of the simulation <br>
> [press 3] Save Simulation : store simulation instance <br>
> [press 4] Run Simulation : Execute all rocket functions <br>
> [press 5] Print Simulation : Outputs verbose information about simulation <br>
> [press 6] Exit Editor : Terminates Simulation section of program <br>
#### [2]: "How would you like to edit your simulation?"
> [press 1] Swap Staging Order: bad idea but you can have stage 2 fire before stage 1 <br>
> [press 2] Remove Stage <br>
> [press 3] <br>
<br>
<br>
<br>


## Program Guide: Satellite Communication
> This is only available when the rocket construction contains satellites. <br> 
#### "How would you like to use the Satellite Communication Network?"
> [Press 1] Send A Message To A Satellite : relays a string from one satellite to another <br>
> [Press 2] Force Satellite Error State: simulates an outer space 'anomaly' to see how it affects the satellite network <br> 
#### If [1] "Input Receiver ID:  "
> Enter the ID (positive integer) of the receiving satellite <br>
#### "Input Sender ID: " 
> Enter the ID (positive integer) of the messenger satellite <br>
#### "Input Message: "
> Enter the message which you would like to transmit via satellite <br>
<br>

#### If [2] "Provide the ID of the satellite for which you wish to alter status: "
> Provide an ID (positive integer less than 60) to specify a satellite <br>

#### "Select a new status: "
> [Press 1] Broadcasting <br>
> [Press 2] Online <br>
> [Press 3] Offline <br>

#### "Continue using the Satellite Communication Network?"
> [Press 1] Yes. Takes you back to the initial Satellite Communications prompt <br>
> [Press 2] No. Ends this part of the simulation <br>





