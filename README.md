# Git Bash Command Cheat Sheet

## Table of Contents
- [Part 1: Basic Terminal Commands](#part-1-basic-terminal-commands)
- [Part 2: File Editing with Vi](#part-2-file-editing-with-vi)
- [Part 3: Git-Specific Commands](#part-3-git-specific-commands)
- [Part 4: Advanced Git Commands](#part-4-advanced-git-commands)
- [Part 5: Miscellaneous Commands](#part-5-miscellaneous-commands)

---

## Part 1: Basic Terminal Commands

| Command                         | Description                                   |
|---------------------------------|-----------------------------------------------|
| `git --version`                 | Shows the installed Git version.              |
| `pwd`                           | Displays the current working directory.       |
| `ls`                            | Lists files and directories in the current directory. |
| `ls -l`                         | Displays detailed information about files and directories. |
| `ls -a`                         | Lists all files, including hidden files.      |
| `ls -al`                        | Lists all files and directories with details, including hidden ones. |
| `clear`                         | Clears the terminal screen.                   |
| `cd <directory>`                | Changes the current directory to `<directory>`. |
| `cd ..`                         | Moves one level up in the directory structure. |
| `mkdir <name>`                  | Creates a new directory named `<name>`.       |
| `rm <file>`                     | Deletes a file.                               |
| `rm -r <directory>`             | Deletes a directory and its contents.         |
| `touch <file>`                  | Creates an empty file named `<file>`.         |
| `mv <source> <destination>`     | Moves or renames files or directories.       |
| `mv -i <source> <destination>`  | Moves files with confirmation for overwriting. |
| `cp <source> <destination>`     | Copies files or directories.                 |
| `cat <file>`                    | Displays the contents of a file.              |
| `echo "<text>" > <file>`        | Writes `<text>` to `<file>`.                  |
| `history`                       | Shows a list of previously used commands.     |
| `explorer`                      | Opens the current directory in File Explorer. |

---

## Part 2: File Editing with Vi

| Command                              | Description                                          |
|--------------------------------------|------------------------------------------------------|
| `vi <file>`                         | Opens `<file>` in the Vi editor. Creates the file if it doesn't exist. |
| `i`                                  | Switch to Insert Mode to type or edit.               |
| `Esc`                                | Exit Insert Mode.                                    |
| `:w`                                 | Save changes.                                        |
| `:q`                                 | Exit the editor.                                     |
| `:wq`                                | Save and exit.                                       |
| `:q!`                                | Exit without saving.                                 |
| **Instruction**                      | After writing text, press `Esc` to enter command mode, then type the command (e.g., `:wq`, `:q!`, `:w!`) and press `Enter`. |
| `echo "Your text here" > new-file.txt` | Creates a new text file with content.               |

---

## Part 3: Git-Specific Commands

| Command                              | Description                                          |
|--------------------------------------|------------------------------------------------------|
| `git init`                           | Initializes a new Git repository.                    |
| `git clone <URL>`                    | Clones a remote repository to your local machine.    |
| `git status`                         | Shows the status of changes in the working directory.|
| `git add <file>`                     | Stages a file for commit.                            |
| `git add .`                          | Stages all changes in the current directory.         |
| `git commit -m "<message>"`          | Commits staged changes with a message.               |
| `git log`                            | Displays the commit history.                         |
| `git log --oneline`                  | Simplifies the commit history.                       |
| `git branch`                         | Lists branches in the repository.                    |
| `git branch <name>`                  | Creates a new branch named `<name>`.                  |
| `git checkout <branch>`              | Switches to a specific branch.                       |
| `git checkout -b <branch-name>`      | Creates and switches to a new branch.                |
| `git merge <branch>`                 | Merges `<branch>` into the current branch.           |
| `git pull`                           | Fetches and merges changes from the remote repository.|
| `git push`                           | Pushes local changes to the remote repository.       |
| `git branch -a`                      | Lists all local and remote branches in the repository. |

---

## Part 4: Advanced Git Commands

| Command                                | Description                                           |
|----------------------------------------|-------------------------------------------------------|
| `git reset --hard`                     | Resets the working directory to the last commit.      |
| `git revert <commit>`                  | Reverts a specific commit by creating a new one.      |
| `git stash`                            | Temporarily saves uncommitted changes.                |
| `git stash pop`                        | Restores stashed changes.                             |
| `git rebase <branch>`                  | Reapplies commits on top of another branch.           |
| `git cherry-pick <commit>`             | Applies a specific commit from another branch.        |
| `git diff`                             | Displays changes not staged for commit.               |
| `git diff --staged`                    | Displays changes staged for commit.                   |
| `git show <commit>`                    | Displays detailed information about a specific commit, including changes made, author, date, and commit message. |

---

## Part 5: Miscellaneous Commands

| Command                             | Description                                           |
|-------------------------------------|-------------------------------------------------------|
| `whoami`                            | Displays the current logged-in user.                   |
| `uname -a`                          | Displays system information.                          |
| `date`                              | Prints the current date and time.                     |
| `man <command>`                     | Opens the manual for a specific command.              |
| `alias ll='ls -la'`                 | Creates a shortcut (`ll`) for `ls -la`.               |
| `unalias <alias>`                   | Removes an alias.                                     |
| `ssh <user>@<host>`                 | Connects to a remote server via SSH.                  |
| `scp <source> <user>@<host>:<destination>` | Securely copies files to a remote server.             |

---

## Conclusion

This cheat sheet provides a comprehensive overview of the most commonly used Git Bash commands, from basic terminal navigation to advanced Git commands. By using this guide, you can enhance your workflow and make the most out of Git Bash.

---
