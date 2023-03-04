# Automatic-3d-printer
Conversion of a domestic 3d printer (Dagoma DiscoEasy 2000) into a mini automatic mass production plant.

Plant cycle operation :

- Conversion of 3d file (Stl, obj, etc) into G code file by means of Dagoma Cura software.

- Manipulation of this Gcode file with a python program that asks user for the number of 3d object he wants to print. Concretely:

    - Removal of the skirt printing steps, and all hardware setup of the printer, like initial position of printer nozzle, initial fans speed, temperature of the nozzle (these steps will be done only one time for the first object).
    
    - Multiplication of the printing steps of the object by the number of desired replicas (15 replicas for instance).
    
    - Adding of waiting time and nozzle moving operation between the printing operation of each replica, so as to let moving arm do its work of piece removal (example in the video). 
   
- Uploading of the new Gcode file into a SD card, and running of the plant.

I succeeded in running my printer during 72h in order to produce 200 little PLA plastic cups as a gift to the students of my college, for a student representative campaign.

I have not anymore the python file I am talking about.
