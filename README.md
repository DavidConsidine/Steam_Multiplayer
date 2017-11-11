# Steam_Multiplayer

### SM01: Getting the Steamworks SDK ###

+ Introducing Steamworks.
+ Downloading the Steamworks SDK.
+ Steamworks and the Online Sub_System.

### SM02: Building SpaceWar in Visual Studio ###

+ Introducing the Steamwork's example project.
+ Updating the project.
+ Downloading & installing DirectX SDK.
+ Fixing the build errors.

### SM02-b: Testing Steam Lobbies ###
+ Finding a testing partner.
+ Testing servers.
+ Testing lobbies.

### SM03: The Online Sub-System ###

+ Importing PuzzlePlatforms (Imported previously. Instead, reorganised file structure to coincide with tutorials).
+ Capabilities of Online Sub-Systems.
+ Including the OSS module.
+ Getting a pointer to the sub-system.

### SM04: NULL Sub-System For Testing ###

+ Role of the NULL sub-system.
+ Configuring the NULL service.
+ Printing the current service name.

### SM05: Creating Online Sessions ###

+ Creating a session.
+ Asynchronous operations and delegates.
+ Creating a session on host.

### SM06: Destroying Online Sessions ###

+ Asynchronous destruction.
+ Checking if a session exists.
+ Destroy the session if we need to.

### SM07: Finding Online Sessions ###

+ 'FindSessions' and 'TShareRef'.
+ Handling 'OnFindSessionsCompleteDelegates'.

### SM08: Query Parameters & Session Settings ###

+ Configuring Session Settings.
+ Adding query parameters.
+ Iterating over a 'TArray'. 

### SM09: Lists Of Widgets With ScrollBox ###

+ Introduction to the 'ScrollBox'.
+ Creating a row widget.
+ Add rows in C++.

### SM10: Populating The Server List ###

+ Expose the text property.
+ Setting a server list from GameInstance.
+ Clearing the previous list.
+ Requesting a refresh.

### SM11: Selecting A Server ###

+ Using 'TOptional' values.
+ Setup the 'UServerRow'.
+ Adding a 'UButton'.
+ Set the selected index.

### SM12: Joining A Session ###

+ Passing the index to 'GameInstance'.
+ How to 'JoinSession'.
+ Handling 'OnJoinSessionComplete'.
+ Getting the platform connect string.

### SM13: Enabling The Steam OSS ###

+ Enabling the steam plugin.
+ Compiling with the steam module.
+ Configuring the 'DefaultEngine.ini'.
+ Reading the verbose logs.
