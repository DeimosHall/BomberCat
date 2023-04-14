const char* wifimanager_html = R"=====(<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Network</title>
    <link rel="shortcut icon" href="./Símbolo EC.svg" type="image/x-icon">
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <section class="ssid">
        <div class="form-container">
            <h2 class="title">Configure Network</h2>
            <p class="subtitle">Enter device AP name and password.</p>
            <form action="/" class="form" method="POST">
                <p>
                    <input type="text" required id="ssid" placeholder="       Device Access Point" class="input input-ap" name="ssid">
                    <input type="password" required id="password" placeholder="       Password" class="input input-pass" name="pass">
                    <input type="text" id="ip" name="ip" value="192.168.1.200" class="ap">
                    <input type="submit" value="OK" class="primary-button ok-button">
                </p>
            </form>
        </div>
    </section>
<script src="script.js"></script>  
</body>
</html>)=====";