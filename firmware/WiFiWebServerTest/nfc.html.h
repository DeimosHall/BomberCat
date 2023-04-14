const char* nfc_html = R"=====(<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>NFC</title>
    <link rel="shortcut icon" href="./Símbolo EC.svg" type="image/x-icon">
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <header>
        <div>
            <h4 class="config-header">NFC Configurations</h4>
        </div>
    </header>
    <section class="card">
        <div class="card-container">
            <h3 class="i-title">Read VISA</h3>
            <img src="./visa.png" alt="visa" class="card-icon">
        </div>
    </section>
    <section class="nfc">
        <div class="nfc-container">
            <form action="/" class="read-form">
                <input type="number" id="card-number" placeholder="Card number will appear here" class="inputC text-card" readonly>
                <input type="number" id="card-date" placeholder="Card date will appear here" class="inputC text-date" readonly>
                <input type="number" id="card-code" placeholder="Card code will appear here" class="inputC text-code" readonly>
                <input type="submit" value="Read" class="primary-button read-button">
            </form>
        </div>
    </section>
    
    <section class="card">
        <div class="card-container">
            <h3 class="i-title">Insert</h3>
            <img src="./card.png" alt="card" class="card-icon">
        </div>
    </section>
    <section class="mags ">
        <div class="mags-container">
            <form action="/" class="card-form">
                <input type="number" id="card-number" placeholder="Enter card number" class="inputC input-card">
                <input type="number" id="card-date" placeholder="Enter card date" class="inputC input-date">
                <input type="number" id="card-code" placeholder="Enter card code" class="inputC input-code">
                <input type="submit" value="Send" class="primary-button send-button">
            </form>
        </div>
    </section>
    <footer>
        <div class="footer-home">
            <a href="./home.html">
                <img src="./Home2.png" alt="home-icon" class="footer-icon">
            </a>
            <a href="./info.html">
                <img src="./info.png" alt="info-icon" class="footer-icon">
            </a>
            <a href="./main.html">
                <img src="./logOut.png" alt="logout-icon" class="footer-icon">
            </a>
        </div>
    </footer>
</body>   
</html>)=====";