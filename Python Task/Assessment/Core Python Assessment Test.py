def user_input_file():

    gen_note=open("Notes.txt","x")

    name=input("Enter Python E-Note Generator Name:")
    title=input("Enter Python E-Note Title:")
    content=input("Enter E-Note Content:")

    if name:
        print("Enter valid name")
    else:
        gen_note.write("Name:")
        gen_note.write(name)
        gen_note.write("\n")
        gen_note.write("Title:")
        gen_note.write(title)
        gen_note.write("\n")
        gen_note.write("Content:") 
        gen_note.write(content)
        gen_note.write("\n") 

    print("\n****************************")
    
def read():

    
    read_file=open("Notes.txt","r") 

    
    print(read_file.read())

    print("****************************")


Status=True

while Status:

    wel_desk="""
            Welcome to Python E-Note
            
            Press 1 for generate note
            Press 2 for viwe note
            Press 4 for exit
        """
    print(wel_desk)

    user_choice=int(input("Enter your choice:"))

    if user_choice==1:
        user_input_file()
    elif user_choice==2:
        read()
    elif user_choice==4:
        Status=False
        
