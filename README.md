# Holbertonschool-monty :alien:
![](https://images-wixmp-ed30a86b8c4ca887773594c2.wixmp.com/f/b1768d35-4f0d-4842-afa9-ac5eba73ac79/ddqjrk1-a0acf2d7-89a1-46e2-b03b-adb82a406a4f.png/v1/fill/w_1280,h_1048,q_80,strp/_blender_preview__final_world___moon_heart_by_makaihana975_ddqjrk1-fullview.jpg?token=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJzdWIiOiJ1cm46YXBwOjdlMGQxODg5ODIyNjQzNzNhNWYwZDQxNWVhMGQyNmUwIiwiaXNzIjoidXJuOmFwcDo3ZTBkMTg4OTgyMjY0MzczYTVmMGQ0MTVlYTBkMjZlMCIsIm9iaiI6W1t7ImhlaWdodCI6Ijw9MTA0OCIsInBhdGgiOiJcL2ZcL2IxNzY4ZDM1LTRmMGQtNDg0Mi1hZmE5LWFjNWViYTczYWM3OVwvZGRxanJrMS1hMGFjZjJkNy04OWExLTQ2ZTItYjAzYi1hZGI4MmE0MDZhNGYucG5nIiwid2lkdGgiOiI8PTEyODAifV1dLCJhdWQiOlsidXJuOnNlcnZpY2U6aW1hZ2Uub3BlcmF0aW9ucyJdfQ.hwdp4nNzpkcNrJL8HK2LO7KN0a8jK5INEEzmDm1oNeU)

---
## Index :zombie:

* [Index](#index-🧟)
* [Description](#description-🐸)
* [Opcode](#opcode-🕵️)
* [Compilation & Output](#compilation--output-🐼)
* [Files](#files-🐳)
* [Authors](#authors-fishsticks)

---

## Description :frog:

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

---

## Opcode :detective:

| Command | Description |
|:-------:|:------------|
|  push   |Pushes an element to the stack.|
|  pall   |Prints all the values on the stack, starting from the top of the stack.|
|  pint   |Prints the value at the top of the stack, followed by a new line.|
|  pop    |Removes the top element of the stack.|
|  swap   |Swaps the top two elements of the stack.|
|  add    |Adds the top two elements of the stack.|
|  nop    |Doesn’t do anything.|
---
## Compilation & Output :panda_face:

~~~c
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
~~~

* Any output must be printed on **stdout**

* Any error message must be printed on **stderr**

---

## Files :whale:

* `README.md:` This file contains the information of this project

* `monty.h:` This file contains prototypes and the project libraries

* `monty.c:` This file is the main that executes the program.

* `functions0.h:` This file contains the functions that structure monty.c

* `get_opcode.c:` This file contains the list of the functions.

* `lines_reader.c:` This file contains the functions that read the lines.

* `stack_freer.c:` This file contains the functions that free the stack.

* `bytecodes:` This is a folder that contains the files type .m
---

## Authors :fishsticks:

* ![GitHub Contributors Image](https://contrib.rocks/image?repo=sandro132/holbertonschool-low_level_programming) 
Miguel Angel Velez Ocampo - <a href="https://github.com/sandro132" target="_blank"> @sandro132</a>![Your Repository's Stats](https://github-readme-stats.vercel.app/api?username=sandro132&show_icons=true)

* ![GitHub Contributors Image](https://contrib.rocks/image?repo=Jcamilop/holbertonschool-low_level_programming) 
Juan Camilo Palacios - <a href="https://github.com/Jcamilo" target="_blank"> @sandro132</a>![Your Repository's Stats](https://github-readme-stats.vercel.app/api?username=Jcamilo&show_icons=true)

***