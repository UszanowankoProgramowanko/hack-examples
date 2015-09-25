<?hh

$set = Set {"A", "B"};
$set[] = "C";
$set[] = "D";
$set->add("D")->add("E");
$set->remove("B");

