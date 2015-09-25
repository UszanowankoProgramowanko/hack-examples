<?hh

class Pudelko<T> {
    protected T $zawartosc;

    public function __construct(T $zawartosc) {
        $this->zawartosc = $zawartosc;
    }

    public function pobierzZawartosc(): T {
        return $this->zawartosc;
    }

}