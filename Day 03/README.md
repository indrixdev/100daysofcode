# What I did today

I spent the day working on the login and registration form from yesterday adding more functionality to it.

## What I learned

- How to take a sentence as input for a variable using getline()
- Debugging program to deal with the multiple errors I got

The hardest part of today was the amount of time I spent looking for a reason why the getline() part of the code was 
throwing errors, and then also why the getline() was not waiting for input. The errors were a rookie mistake in the way
I was calling the method, having been so used to adding std:: before statements I didnt realise at first that this is not
needed. Then as for the getline() not waiting for user input, I spent a little time searching for others with this issue
and the fixed turned out to be calling std::cin.ignore() before calling the getline() as the console was storing previously
entered inputs.

### What is next

I will be developing this further over the next couple of days to include storing the information locally and adding a 
text file transcript that monitors all inputs for both students and admin accounts.
