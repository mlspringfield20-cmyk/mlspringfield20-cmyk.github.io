# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## [ Course Name <-- Replace all text in brackets ]

- **[ Martavious Springfield ]**
- **[ 09/06/2026 ]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ Ctrl + L ]: Clear the Screen
- [ pwd ]: Print the "Working Directory"
- [ ls ]: List files and folders
- [ ls -a ]: List files and folders, including invisible files
- [ ls -lh ]: List all files and folders, in human readable form
- [ cd ~ ]: Change directory
- [ cd / ]: Change directory, go to root directory
- [ cd ~ ]: Change directory and go to user home directory
- [ cd .. ]: Change directory, go up one folder level
- [ cd ../..]: Change directory, go up two folder levels
- [ cd ~/Desktop ]: Change directory to my desktop!


**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

[ When I completed the folder drop into the terminal window. Every folder within the chosen folder proceeded to open. I selected my FS folder than opened every folder from ym previous courses throughout my time attending Full Sail University. ]

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

[ Local Version Control System (LVCS), the easiest and simplest form of version control, all the files change and version history are stored on the local database.
Centralized Version Control System (CVCS), this is the tool that store all project files, allowing the complete change history on a central server. 
Distributed Version Control System (DVCS), tracks changes in source code, where the user keeps the complete copy of the project on the local computer. ]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- [ git clone <repository_url> ]: Clone a repository
- [ git config --global user.name "Your Name" ]: Set-up a global user name
- [ git config --global user.email "your.email@example.com ]: Set-up a global email address (to match my GitHub account email)
- [ git status ]: Shows the current state of your directory and staging area
- [ git add <file_name> ]: Add modified files to the next commit
- [ git commit -m "Your commit message" ]: Make a commit with a new message
- [ git log ]: Show my commit history
- [ git --help ]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[ I open GitHub and navigate to the repositroy,
Once there I select the green "Code" button to continue.
When this is selected I copy the HTTPS repository URL and open the terminal,
Next I navigate to the desired directory that I want using the cd command,
Then enter in: git clone <repository-url>,
Make any changes to the files as needed if any are needed,
Next I'll use the git add . to stage all changes made,
Then I will commit using -m "message" to create a respository commit,
Finally I will use git push to upload all the changes properly to GitHub]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  [The purpose of this file is to specificy untracked file for Git to ignore. Preventing temporary files, systm files and sensitive data from being accidentally comitted.]

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  [This is a automatic, hidden system file. This file is specific to the local computer created by macOs.]

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  [The other file or folder I want to add is node_modules. This folder would contain dependencies with the ability to be easily recreated.]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[ Research Summary: What resource(s) did you find most helpful this past week and why? ]

**Terminal Commands**  
[Site Address] https://www.git-tower.com/blog/command-line-cheat-sheet/

**Three Types of Version Control**  
[Site Address] https://www.atlassian.com/git/tutorials/what-is-version-control

**Git Commands**  
[Site Address] https://www.atlassian.com/git/tutorials/atlassian-git-cheatsheet

**Connecting to GitHub using Terminal**  
[Site Address] https://docs.github.com/en/authentication/connecting-to-github-with-ssh

**Using .gitignore and Why it's Important**  
[Site Address] https://docs.github.com/en/get-started/git-basics/ignoring-files
