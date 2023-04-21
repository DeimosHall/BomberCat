const char* info_html = R"=====(<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Info</title>
    <link rel="shortcut icon" href="./Símbolo EC.svg" type="image/x-icon">
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <header>
        <div class="header-home">
            <img src="./Logo-55_55_Neg.png" alt="logo" class="logoP">
            <p class="logoPTitle">NFC <br>Copy<br> Cat</p>
        </div>
    </header>
    <main>
        <section class="about">
            <div class="about-container">
                <h3 class="i-title">About Us</h3>
                <img src="./Logo-100_100.png" alt="logo" class="mainLogo">
                <p>We are... Lorem ipsum dolor sit, amet consectetur adipisicing elit. Quas ipsam tempore vero deserunt nesciunt, rerum quod magnam veniam autem quia consequatur, corrupti soluta placeat nihil dolore magni, laudantium incidunt. Neque?</p>
            </div>
        </section>
        <section class="contact">
            <div class="contact-container">
                <h3 class="i-title">Contact Us</h3>
                <p>Send us an e-mail</p>
                <form action="/" class="form">
                    <p>
                        <input type="username" required id="username" placeholder="       your@email.com" class="input input-username input-contact">
                        <input type="submit" value="contact" class="primary-button send-button">
                    </p>
                </form>
            </div>
        </section>
        <section class="privacity">
            <div class="privacity-container">
                <h3 class="i-title">Privacity</h3>
                <p>For this privacity policy... Lorem ipsum dolor sit, amet consectetur adipisicing elit. Quas ipsam tempore vero deserunt nesciunt, rerum quod magnam veniam autem quia consequatur, corrupti soluta placeat nihil dolore magni, laudantium incidunt. Neque?</p>
            </div>
        </section>
    </main>
    <footer>
        <div class="footer-home">
            <a href="./home.html" class="footer-icon-link">
                <!-- <img src="./Home1.png" alt="home-icon" class="footer-icon"> -->
                <div class="footer-icon">
                    <?xml version="1.0" encoding="utf-8"?>
                    <svg width="30px" height="30px" viewBox="0 0 1024 1024" xmlns="http://www.w3.org/2000/svg"><path fill="#5f5f5f" d="M512 128 128 447.936V896h255.936V640H640v256h255.936V447.936z"/></svg>
                </div>
                <p class="footer-icon-text">Home</p>
            </a>
            <a href="./info.html" class="footer-icon-link">
                <!-- <img src="./info.png" alt="info-icon" class="footer-icon"> -->
                <div class="footer-icon">
                    <?xml version="1.0" encoding="utf-8"?><!-- Uploaded to: SVG Repo, www.svgrepo.com, Generator: SVG Repo Mixer Tools -->
                    <svg fill="#1A5157" height="35px" width="35px" id="Layer_1" data-name="Layer 1"
                        xmlns="http://www.w3.org/2000/svg" viewBox="0 0 16 16">
                        <path class="cls-1" d="M8,2a6,6,0,1,0,6,6A6,6,0,0,0,8,2ZM7.30274,4.28083a.95128.95128,0,0,1,1.34971,0,.92836.92836,0,0,1,.27615.67443.95244.95244,0,0,1-1.90483,0A.92362.92362,0,0,1,7.30274,4.28083ZM9.70043,12H6.29957V10.736h.83322V7.7772H6.29957V6.51325H8.88421V10.736h.81622Z"/>
                    </svg>
                </div>
                <p class="footer-icon-text selected">Info</p>
            </a>
            <a href="./main.html">
                <!-- <img src="./logOut.png" alt="logout-icon" class="footer-icon"> -->
                <div class="footer-icon logout">
                    <?xml version="1.0" encoding="utf-8"?><!-- Uploaded to: SVG Repo, www.svgrepo.com, Generator: SVG Repo Mixer Tools -->
                    <svg fill="#5f5f5f" width="30px" height="30px" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><path d="M4,12a1,1,0,0,0,1,1h7.59l-2.3,2.29a1,1,0,0,0,0,1.42,1,1,0,0,0,1.42,0l4-4a1,1,0,0,0,.21-.33,1,1,0,0,0,0-.76,1,1,0,0,0-.21-.33l-4-4a1,1,0,1,0-1.42,1.42L12.59,11H5A1,1,0,0,0,4,12ZM17,2H7A3,3,0,0,0,4,5V8A1,1,0,0,0,6,8V5A1,1,0,0,1,7,4H17a1,1,0,0,1,1,1V19a1,1,0,0,1-1,1H7a1,1,0,0,1-1-1V16a1,1,0,0,0-2,0v3a3,3,0,0,0,3,3H17a3,3,0,0,0,3-3V5A3,3,0,0,0,17,2Z"/></svg>
                </div>
                <p class="footer-icon-text">Log out</p>
            </a>
        </div>
    </footer>
</body>
</html>)=====";