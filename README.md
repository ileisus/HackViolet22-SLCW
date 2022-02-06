# HackViolet22-SLCW


# README

***

Project/App: Sun After Dark

Author: Susie Li Chelsie Wei

Date: 2/6/2022

***

Program purpose: this is a prototype of a mobile app that ensures people’s safety by relying on other available users’ help. this prototype involves a UI design through figma and back-end code on C++ with partial swift (mobile app) code.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

Why sun after dark?

There are a plethora of safety geotracking apps on the market, however, after careful market analysis and app-specific user feedback research, even among the most successful (such as Noonlight) suffer from the following unintended flaws:

  1) False alarms are costly. This comes in 2 forms: (false alarms being defined as situations where a person senses they are in danger but fortunately the situation does not escalate):
     a) Financial cost. When a user who feels in danger goes through with a "false alarm" and the officers arrive, upon finding no dire emergencies, the users are charged around $200 for this incident, even though in the moment they did feel highly unsafe and hence used the app, which is exactly the situation the app is designed to help in. 
     b) Oppotunity cost. The  a user who feels in danger, out of fear of consequences that their alert becomes a "false alarm", does not call the officers, but does eventually get harmed in the alarming situation when it aggrevates. 
     
  2) After analysis of big data of 911 calls, a highly common problem is that the officers spend a lot of time and questions on asking for the specific location, which becomes even more difficult when the dialer's location is constantly moving (such as in an unsafe car, walking in an unfamiliar place, etc). Making the dialer provide an accurate location raises 3 issues: 1) infeasibility, 2) wastes precious time that could have been spent on intercepting the victim, and 3) making the victim talk repeatedly might expose the fact that they are calling, which often leads to more danger and escalates the situation faster. 

This app that we develop aims to mainly target womxn identifying groups, to avoid situations that they may not wish to handle alone, by providing both the technical support (through geo-tracking, and the notification + verifier mechanism (discussed below), as well as a professional network of dispatchers who pay close attention to high-frequency areas by extrapolating crime patterns in an area using big data from the police, online databases, or other reliable sources. 

Specifically, Sun After Dark allows users to send help requests pre-event to make sure they feel safe going into those events. Such events may be, grabbing dinner with an ex with abusive tendencies, living in a hotel room alone in an unfamiliar area, having worsening flu/covid that may deteriorate one’s capability to dial for urgent care. The help requests would be delivered as notifications to other users in the vicinity who have previously stated are free during that time, and those other users who accept the request would take on as verifiers who fulfill the request. a request can be small, such as making sure to text at a certain time to make sure things are going okay, or can escalate to dialing urgent care for a sick patient. the verifier would not have access to the requestee’s information, as everything would be hashed. when dialing and giving location on behalf of the requestee, a built in gps system using the gps api would be delivered to 911 or urgent care. however, the requestee’s customizable information may be released to their verifier, such as their blood type or whether they are on insurance. delivering those information may be useful. throughout this process, the requestee’s name may not be revealed to protect their privacy. 

Sun After Dark would first be released among college campuses, and campus police may be replaced by 911 in desperate situations. 

-------------------------------------------------------------------------------------------------------------------------------------------------------------

Who would use Sun After Dark?

Those people who may feel that they have no close relations in the city, in the same country, or even the same time zone. Without an immediate emergency contact, they may rely on others in the community to serve as an emergency contact for them, providing that no further information would be disclosed to the verifier (which is where hashing and encryption of personal information plays an important role). 

Users may be given the option to add other users on the app, perhaps due to the convenience in location and time compatibility and they may choose to establish long term verifyee-verifier mutual relations between them. 

-------------------------------------------------------------------------------------------------------------------------------------------------------------

How does Sun After Dark protect user safety?

Requestee/verifyee’s real name and real time location would not be disclosed to any user. potential verifiers, before accepting the request, may only see a false name, the details of the request, gender identity of the requestee, and their approximate distance between. 

Based on previous trails and case studies including Noonglight, we believe that by starting with introducing it to college campuses, to people who already feel that they belong to a pre-existing community, this idea would run well and eventually garner enough support to discuss a partnership with the local police. 

During the sign up phase for new users, the user would have to provide a photo identification and passport image in order to be verified to avoid ill-intentioned users. when sending messages and dialing phone calls, numbers would be hashed.
