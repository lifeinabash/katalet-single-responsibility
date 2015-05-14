import sys

def main(argv):
    try:
        kataName = argv[1]
    except:
        print 'Please enter a katalet name.'
        exit(2)

    print 'The katalet you have selected is', kataName

if __name__ == "__main__":
        main(sys.argv[1:])
