if ARGV.length == 0
    puts "Please enter a katalet name."
    exit
end

kataName = ARGV[0]
output = "The katalet you have selected is %s" % kataName
puts output
