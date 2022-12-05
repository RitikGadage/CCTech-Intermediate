********************* Test strategy **************************

==> Task is to write a function that is given a string filename and which returns a pair of integers specifying the start and end indexes (into the filename) of the selected range.

==> How to remove that extensions. (i.e .cpp , .js , etc)

==> There is 4 words i.e "tests", "test", "spec", or "step" , Write code for ignoring those words and returning range of the file name.


*********************** Test cases ********************

==> Input path as a string it will give pair of integer i.e. starting and ending index of the file name.


"diamond.h" ==> [0, 8]

"Diamond_Spec.feature" => [0, 8]

"HikerTest.js" ==> [0, 5]

"test/FizzBuzz_test.exs" => [6, 14]

"src/test/Roman.spec.re" => [10, 16]

"fizz.buzz-tests.js" => [0, 10]

"hiker.cpp" ==> [0, 5]


