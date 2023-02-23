class Computer{
    constructor(name){
        this.name = name
    }

    run(){
        console.log("The computer is now running")
    }
}

class Macbook extends Computer{
    constructor(name, company){
        super(name)
        this.company = company
    }

    logIn(){
        console.log("You are now logged into Mac" + this.name)
    }
}

const mac = new Macbook('Air','Apple');
mac.logIn()
mac.run()
