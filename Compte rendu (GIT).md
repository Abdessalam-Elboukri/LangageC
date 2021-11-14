-------------------  09:11:2021 ---------------------

#what is Git ?
=============
git is a distributed version control system that records changes of your files or folders that will give you an advantage to create a history of changes that you made on the project while ou working on it

#Difference between git and github?
=================================
git is a system that create a history of changes of that file with new version 
while github is a server that you can host your projects and save it there on the repository as public which everyone can access or as private .

#Alternatives of git?
===================
 subversion
 helix core
 perforce

#Commands Line of Git?
====================
To Config the git we use

	git config --global user.name "your username"
		this command will setup your username to git.
			example git config --global user.name "coder01"

	git config --global user.mail "your email"
		this command will setup your email to git.
			example git config --global user.mail "coder01@gmail.com"
	
	cd
		it used to select which directory will work on.
			example ( cd imageFolder ).
	
	mkdir
		will create a new folder that you named
			example ( mkdir imageFolder ).

	touch 
		will show all the file in the directory.
			example ( touch readme.txt ).

	mv
		will rename the file that you choose

	rm -rf
		will delete the file that you choose.

	git clone
		will retrieve an entire repository from hosted location via url.

	git status
		will show the status of the repository ; if staged, unstaged or untracking 
			if the files shows in a red color that means these files got a modifications.

	git add [file name]
		This command will add the file in the staging area.

	git add .
		This command will add all the file in the directory in the staging phase.

	git commit -m "a message "
		This command lets you only specify a short summary for your commit message.

	git log 
		will show the history of the commits .

	git branch 
		will show all created branches.
	


	

		
		