gcc -I modules tests/test_gpa.c modules/course.c modules/courseResult.c modules/gpa.c -o test_gpa.out
chmod +x test_gpa.out
./test_gpa.out