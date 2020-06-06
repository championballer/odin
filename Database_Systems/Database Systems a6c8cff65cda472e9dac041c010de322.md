# Database Systems

- Lecture 1
    - What is a Database?
        - Database is an organised collection of inter-related data that models some aspect of the world. For example: Modeling the students in a class or modeling a digital music store like Spotify.
        - Databases are the core component of most computer applications.
    - Example of Digital Music Store
        - Used to keep track of artists and albums
        - We store information about Artists, and what albums the artist has released
    - Difference between Database and DBMS?
        - DBMS is the software that manages a database. For example, MySQL, Oracle, MongoDB.
    - Flat File Strawman
        - Assuming, we know nothing about databases and database management systems, and we go about storing data. A basic method could involve storing files as CSV files, where each entity (Artist, Album) is stored in its own file. We could write code that has to parse the files each time read or update operation needs to be performed.
        - Each entity has its own set of attributes.  So in each file different records are delimitted by a new line, wherein different attributes within a record are separated by commas.
        - For example, in case of the Digital Music Library example, there would be two files : one for artist and the other for album. Artist would have (name, year, country), while an album has (name, artist, year) attributes.

            ![Database%20Systems%20a6c8cff65cda472e9dac041c010de322/Screenshot_2020-06-06_at_2.50.49_PM.png](Database%20Systems%20a6c8cff65cda472e9dac041c010de322/Screenshot_2020-06-06_at_2.50.49_PM.png)

        - Query example : Get the year that Ice Cube went solo. The code to answer this query would look as in the following image.

            ![Database%20Systems%20a6c8cff65cda472e9dac041c010de322/Screenshot_2020-06-06_at_3.10.49_PM.png](Database%20Systems%20a6c8cff65cda472e9dac041c010de322/Screenshot_2020-06-06_at_3.10.49_PM.png)

        - Issues with this apporach:
            -