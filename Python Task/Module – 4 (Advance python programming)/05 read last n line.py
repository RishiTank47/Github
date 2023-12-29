# Write a Python program to read last n lines of a file.

lines_to_read=int(input("How many lins you want to read:-"))

# file=open("read_last_n_line.txt","x")

if lines_to_read  > 17:
    print("file does not have more than 17 lines.")
else:
    file=open("read_last_n_line.txt","r")
    for i in range(lines_to_read):
        print(f"\nline{i}:-",file.readline()) 