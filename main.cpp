struct Foo {
    i32 a;
    f32 b;
}

fn get_foo() -> Foo {
    let a = 3;
    let b = 2.5_f32;
    Foo { a, b } 　
}

fn main() {
    let mut s = String::new();
    s.push('a');
    s.push('b');
    println("{}", s);

    let foo = get_foo();

    match foo.a ‌{
        1 : println("1");
        2 ｜ 3 ｜ 4 : println("234");
        _ : println("lol");
    }

    let v = vec[1, 3, 5, 6, 11];

    for e in v ‌{
        print("{}: ", e);

        if e % 2 == 0 ‌{
            println("pair");
        } else {
            println("impair");
        }
    }
}
