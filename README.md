# katalet-single-responsibility
A Single Responsibility micro workshop

This is an attempt to design a curriculum for developers of all abilities to level up quickly via deliberate real world experience.

## How to use the curriculum

Simply read the [presentation](https://docs.google.com/presentation/d/12vNh4FTAhz0qWQlpswWIdwifRlUVL1huw2038czCDak/) or doc file to learn about the issue.

Checkout the runnable code under src/{fav-language} that violates the learned pattern.

Have fun fixing it. :)

Explore new options, do it "wrong," do it "right," do it again.

# Single Responsibility

## The Definition

> A class should only have one reason to change

## Consider this

    -------------------------------------
    | Main( args )                      |
    |-----------------------------------|
    | Retrieve Name from argument       |
    | Print formatted message with Name |
    ------------------------------------

**This main class has more than one reason to change.**

The argument list, flags, or format could change or come from some other location like a configuration file.

The format of the string could change

## Encapsulating reasons for change


    -------------------------------------
    | Main( args )                      |
    |-----------------------------------|
    | *Arguemnt Manager( args )         |
    | Print formatted message with Name |
    ------------------------------------
                      |
                      |
                     \ /
    -------------------------------------
    | Argument Manager( args )          |
    |-----------------------------------|
    | Retrieve Name from argument       |
    ------------------------------------
