var express = require("express");
var app = express();
var path = require("path");

// viewed at http://localhost:8080
app.get("/", function (req, res) {
  console.log("coming here");
  res.sendFile(path.join(__dirname + "/index.html"));
});

var port = 8080; // set our port
// ROUTES FOR OUR API
// =============================================================================
var router = express.Router(); // get an instance of the express Router

app.use("/", router);

// START THE SERVER
// =============================================================================
app.listen(port);
console.log("Magic happens on port " + port);
