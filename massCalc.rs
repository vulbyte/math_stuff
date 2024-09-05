
fn main() {
    //use std::io;

    println!("what is the volume?");

    let volume = take_input_as_num(); 

    println!("what is the total mass?");

    let total_mass = take_input_as_num(); 

    println!("what is the mass of the container?");

    let container_mass = take_input_as_num(); 

    print!(
        "volume:{}, totalMass:{}, containerMass:{}, massOfWater:{}, density:{}", 
        volume,
        total_mass,
        container_mass,
        (total_mass - container_mass),
        (total_mass - container_mass)/volume,
    );
    //print!("mass of water: {}", (totalMass-containerMass/volume));
}

fn take_input_as_num() -> f64 {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("failed to read line");

    let number: Result<f64, _> = input.trim().parse();

    match number {
        Ok(parsed_number) => {
            println!("you entered: {}", parsed_number);
        }
        Err(_) => println!("Error: number invalid, please enter a valid number"),
    } 

    number.unwrap_or(0.0)
}

