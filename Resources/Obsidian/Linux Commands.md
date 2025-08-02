## 1. chmod

chmod (change mode)
	Owner: 
		u -> user 
		g -> group 
		o -> other 
		a -> all
	Permission: 
		r -> read(4) 
		w -> write(2) 
		x -> execute(1)
	Symbols:
		+ -> add permission
		-  -> remove permission
		= -> set permission
		
```
chmod u+x file.txt     # Give execute permission to the user
chmod go-w file.txt    # Remove write permission from group and others
chmod a=r file.txt     # Set read-only for everyone
```

```
chmod 755 script.sh    # rwx for user, r-x for group and others
chmod 644 file.txt     # rw- for user, r-- for group and others
chmod 700 private.txt  # rwx for user only
```

| Octal | Meaning | Permissions          |
| ----- | ------- | -------------------- |
| 7     | rwx     | read, write, execute |
| 6     | rw-     | read, write          |
| 5     | r-x     | read, execute        |
| 4     | r--     | read only            |
Recursive
```
chmod -R 755 folder/  # Apply to folder and contents
```

 #### `ls -l` Output Breakdown
 
```
-rw-r--r--  → 10 characters
```

 Character 1: **File Type**

|Symbol|Meaning|
|---|---|
|`-`|Regular file|
|`d`|Directory|
|`l`|Symbolic link|
|`c`|Character device|
|`b`|Block device|

### 🔹 Characters 2–10: **Permission Bits**

Split into **3 groups of 3**:
```
-rw- r-- r--
 ↑    ↑   ↑
 |    |   └── Others
 |    └───── Group
 └────────── User (owner)
```
Each group represents:

- `r` → read = 4
    
- `w` → write = 2
    
- `x` → execute = 1
    
- `-` → permission **not granted**
```
-rw-r--r--  → regular file, permissions:
  User  = rw-  = 6
  Group = r--  = 4
  Other = r--  = 4
Octal equivalent = **644**
```
### Permission Grouping (Quick View)

| Symbolic | Binary | Octal | Meaning     |
| -------- | ------ | ----- | ----------- |
| rwx      | 111    | 7     | Full access |
| rw-      | 110    | 6     | Read/write  |
| r-x      | 101    | 5     | Read/exec   |
| r--      | 100    | 4     | Read only   |
| ---      | 000    | 0     | No access   |
