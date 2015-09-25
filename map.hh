<?hh

$map = Map {"A" => 1, "B" => 2, "C" => 3};
$map["D"] = 4;
$map["E"] = 5;
echo $map["A"];
echo $map->get("B");
$map->remove("B");
foreach ($map as $k => $v) {
    echo $k . ": " . $v . "\n";
}