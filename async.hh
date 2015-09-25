<?hh

class Bar {};
async function gen_bar(int $a): Awaitable<?Bar> {
    sleep(50);
    return new Bar();
}

gen_bar(4);
await gen_bar(5);
gen_bar(6);