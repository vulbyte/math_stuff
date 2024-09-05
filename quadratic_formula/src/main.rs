fn main() {
    let mut args: Vec<String> = std::env::args().collect();

    let mut input;

    if args.len() != 3 {
        println!("what is a, b, then c? (spaces to seperate values)");
        let n = std::io::stdin().read_line(&mut input).unwrap() as Vec<String>;
        args = vec![n.into_iter().to_string()];
    }

    println!("Hello, world!");
}
