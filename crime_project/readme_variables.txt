
ONLINE CRIME INFORMATION MANAGEMENT PROJECT
Various variables used in various forms:
Form1:
This is the main form user will see once logged in.
a) Labels:
	1. label_welcomeuser: will display the user name of the person logged in.
	2. label_welcome,label_search,lable_keyword: just displays the texts.
	
b) Buttons:
	1. button_logout: will be used to logout from the existing user.
	2. button_add: will be used to add more new contents to the Crime Information Database.
	3. button-update(under construction): based on unique ids given to each crime database, user          can only update and add more suspects and evidences to 	the crime information database.
	So, beforehand only, user will be warned that once a database has been created, user can only update the above written. But CANNOT delete the existing 	databases
	4. button_viewall: to view all records given/stored so far.
	5. button_search: to search once the fields are filled.

c) Combo-boxes: 
	1. comboBox_search: by the text in the options of this combo-box, user can search by category of the crime, suspects, evidences or some keywords of the 		description.
d) TextBoxes:
	1. textBox_keyword: to type the keyword to search.
Form_Add:
a)Labels:
	1.label_category,  label_date, label_time, label_location, label_description, label_evidence, label_suspect: These labels only used to display the text         headings.
b)Buttons:
	1.button_addevidence: to add another evidences.
	2.button_upload: to upload some file as an evidence.
	3.button_addsuspect: to add another suspect.
	4.button_addmore: to add more databases.
	5.button_done: to check if all the filling is done.
	6.button_cancel: if user want to cancel all the data written into the fields and close this form without adding any database.
c)Combo-boxes:
	1.comboBox_category: to select which category of the crime.
d)TextBoxes:
	1.textBox_place: to store the location of the crime.
	2.textBox_description: to store the description of the crime.
	3.textBox_evidence: to store the evidences.
	4.textBox_suspect: to store the suspect’s name.
e)Datepickers:
	1.datePicker: data is selected through the calendar.
	2.timePicker: to set time.

