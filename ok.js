
const express = require("express");
const path = require("path")
const engine = require("ejs-mate")
const app = express();
const PORT = 3000;
const mongoose = require("mongoose");
const methodOverride = require("method-override");
const session = require("express-session")
const flash = require("connect-flash");

const sessionflash = {
    secret: 'this is a flash session',
    resave: false,
    saveUninitialized: true,
    cookie: {}
  };
  
  app.use(session(sessionflash))
  app.use(flash());


  app.use((req,res,next)=>{
    
    

    // res.locals.success = req.flash.success;

    res.locals.successMessage= req.flash("update");

    next();

  })


// All 
const productRouter = require("./routes/productRoutes");

//Review Routes

const reviewRouter = require("./routes/reviewRoutes")


// Middlewares
app.use(methodOverride('_method'));
app.use(express.urlencoded({extended:true}));
app.engine("ejs", engine);