# Resource File Generation Ideas

For the time being, the files are named in such as way that they are linked into a main
resource archive.

## Constraints
Need to identify both interal (self) offsets and external (other file) offsets. The external 
offsets need to have the file index extracted into a separate u16 list. Both types of offsets
need to be transformed into a singly linked list type of structure. The start of both lists 
then need to be saved for use in the main table.

Also, some files need to be vpk encoded...

## Ideas
* Use elf relocation symbols? regular symbols?