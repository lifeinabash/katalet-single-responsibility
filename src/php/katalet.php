<?php

if (! isset($argv[1]) ) {
    die("Please enter a katalet name.\n");
}

$kata_name = $argv[1];
printf("The katalet you have selected is %s\n", $kata_name);
