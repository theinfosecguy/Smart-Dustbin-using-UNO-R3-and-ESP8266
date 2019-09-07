# Smart-Dustbin-using-UNO-R3-and-ESP8266
Smart Description using Arduino Uno R3 and NodeMCU (ESP8266) 


Configuring NODEMCU to send notifications !

Step 1: Setup the PushBullet service. Create & Activate your account, login in the website.

----> Click on you mobile OS type (Android or IOS) or go in the apps market / Google play and search for PushBullet and setup the application on your mobile device using the same account you’ve just created. After that you should see your mobile smartphone in the Devices menu.

----> Go to Settings menu and create a new Access Token by pressing Create Access Token button.


Step 2: Setup PushingBox, IoT notification center

Go to PushingBox, create a new account for free and login. Go to Dashboard and click on My Services – > Add a service. Select PushBullet service from the list.

---->Give it a name, and paste your pushbullet token which you should have in your notepad text file and submit the form. After that go to My Scenarios and add a new scenario. You should now be able to add a new Action to your scenario.

---->The text between the $param$ signs will be your HTTP GET parameter, you will see in the code later. You will be able to replace each parameter like that with your data. Save the action and go back to your virtual scenarios list. You should be able to see your new scenario and copy the DeviceId.

