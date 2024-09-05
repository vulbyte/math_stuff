// TODO: parse out inputs as flags instead of ordered commands

fn main() {
    let mut input: u32; //max value of a u32

    let args: Vec<String> = std::env::args().collect();

    if args.len() > 1 {
        input = args[1].parse::<u32>().unwrap();
    } else {
        println!("what is the number you would like to find the factors of? \n");
        let mut buffer = String::new();
        std::io::stdin()
            .read_line(&mut buffer)
            .expect("failed to read value");

        input = buffer.trim().parse::<u32>().unwrap();
        println!("input: {}", input);
    }

    // TODO: rewrite these loops t be speedy

    //cheat the highest value
    println!("{} * {}", input, 1);
    //if cli input
    if args.len() > 2 {
        for i in (1..=input / 2).rev() {
            if args[2] == "h" && i < input / i {
                break;
            }
            if input % i == 0 {
                println!("{} * {}", i, input / i);
            }
        }
    } else {
        //if no cli input
        for i in (1..=input / 2).rev() {
            if args[2] == "h" && input < input / i {
                break;
            }
            if input % i == 0 {
                println!("{} * {}", i, input / i);
            }
        }
    }
}
