!/bin/awk -f
#all comment lines must start with a hash '#'
#name: student_tot.awk
#to call: student_tot.awk grade.txt
#prints total an average of club student points

#print a header first
BEGIN{
print "Student	Date	Member No.	Grade	Age	Points	Max"
print "Name		Joined							Gained	Point Available"
print "================================================================"

}


