Infografic

You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

    - To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table ↴ , where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

    - "After beating the eggs, Dana read the next step:"

    - "Add milk and eggs, then add flour and sugar."

    - What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of  2

Assumptions:
    
    - I'm gonna assume this is a word counter
    - And I would imagine this program only runs with a certain limit
    
Solution:

    - First of all I would change everything to small case 
    letters (we could use the already made function tolower)
    - I would remove special characters ",,,-,?,!, etc... 
    - I would have a variable wich would have the input string with the filters already runned in the first and second part.
    - I would split this string when it finds a space
    - I would go throught the string and if:
        -Word new: I would check the hash, if not ther I would add the word with value 1
        -Word old: I would check the has, if there I would add 1 to the value
    - This process will be repeated with each word in the string
    - It will finish when there is no more word
    