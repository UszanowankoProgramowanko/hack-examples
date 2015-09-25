<?hh

function koteł(int $x): ?int {
    $rnd = rand(0,1);
    return ($rnd ? 5 : null);
}