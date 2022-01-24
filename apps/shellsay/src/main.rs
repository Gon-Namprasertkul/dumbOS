use std::env;

fn main()
{
    let mut args = env::args();
    let _ = args.next();
    let text = args.next().expect("It didn't say anything");
    println!("\n               < {} >\n               /\n___________   /\n( >        ) /\n(  ______  )\n(__________)\n
             ", text);
}
