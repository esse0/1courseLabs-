const modal1 = document.querySelector('.mod1');
const modal2 = document.querySelector('.mod2');
const modal3 = document.querySelector('.mod3');
const modal4 = document.querySelector('.mod4');
const modal5 = document.querySelector('.mod5');
const modal6 = document.querySelector('.mod6');
const glmodal = document.querySelector('.modal');
const body = document.querySelector('body');

modal1.addEventListener("click",function(e){
    let hash = window.location.hash;
    hash = hash.substr(1);
    if(hash === 'ru') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Санкт-Петербург</h2><p><img class=\"modal_img\" src=\"media/City/питер.jpg\" alt=\"photo\">Санкт-Петербург славится своей великолепной архитектурой. Это город с просторными улицами, красивыми площадями и сотнями интереснейших зданий. Здесь сконцентрировано просто огромное количество памятников архитектуры, а многочисленные музеи свидетельствуют о богатой важными событиями истории города. В Санкт-Петербурге успешно функционирует более ста театров, коллективы которых регулярно ставят культовые спектакли. В исторической части города в домах-памятниках расположены книжные магазины и лавочки, поэтому в качестве сувенира каждый турист сможет увезти из Санкт-Петербурга хорошую книгу.</p><a href=\"payform.html\" class=\"modal_btn\"><span>Купить билет</span></a></div></div>";
    if(hash === 'en') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>St.Petersburg</h2><p><img class=\"modal_img\" src=\"media/City/питер.jpg\" alt=\"photo\">St.Petersburg is famous for its magnificent architecture. It is a city with spacious streets, beautiful squares and hundreds of interesting buildings. A huge number of architectural monuments are concentrated here, and numerous museums testify to the history of the city rich in important events. More than a hundred theaters successfully operate in St. Petersburg, whose teams regularly put on cult performances. Bookshops and shops are located in the historical part of the city in monument houses, so every tourist can take a good book from St. Petersburg as a souvenir.</p><a href=\"payform.html\" class=\"modal_btn\"><span>buy a ticket</span></a></div></div>";
    glmodal.classList.remove('closed')
    body.classList.toggle('_lock');
    glmodal.classList.toggle('up');

    if(document.querySelector('.exit')){
        const exit = document.querySelector('.exit');
        exit.addEventListener("click",function(e){
            glmodal.classList.remove('up')
            body.classList.remove('_lock');
            glmodal.classList.toggle('closed');
            glmodal.innerHTML = " ";
        });
    }
});

modal2.addEventListener("click",function(e){
    let hash = window.location.hash;
    hash = hash.substr(1);
    if(hash === 'ru') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Сочи</h2><p><img class=\"modal_img\" src=\"media/City/сочи.jpg\" alt=\"photo\">Сочи – крупный курортный город, расположенный у Черного моря в Краснодарском крае. Ещё с советских времен пляжи Сочи были популярны у туристов из СНГ. Но с тех пор город во многом преобразился, а все благодаря прошедшим в 2014 году Олимпийским играм. Сочи стремительно развивается и желает достичь в ближайшем будущем уровня европейских курортов.Сочи знаменит не только своими пляжами, но и кипарисовыми парками, пальмами и колоннами ротонд. Кроме того, здесь можно полюбоваться восхитительной природой и водопадами. Также Сочи может похвастаться снежными пиками гор, озерами, ущельями и бурными реками.</p><a href=\"payform.html\" class=\"modal_btn\"><span>Купить билет</span></a></div></div>";
    if(hash === 'en') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Sochi</h2><p><img class=\"modal_img\" src=\"media/City/сочи.jpg\" alt=\"photo\">Sochi is a large resort city located near the Black Sea in the Krasnodar Territory. Since Soviet times, the beaches of Sochi have been popular among tourists from the CIS. But since then, the city has changed in many ways, and all thanks to the 2014 Olympic Games. Sochi is developing rapidly and is striving to achieve the future level of European resorts.Sochi is famous not only for its beaches, but also for its cypress parks, palm trees and rotunda columns. In addition, here you can admire the amazing nature and waterfalls. Also, Sochi can be manifested by snowy peaks of mountains, lakes, gorges and brown rivers.</p><a href=\"payform.html\" class=\"modal_btn\"><span>buy a ticket</span></a></div></div>";
    glmodal.classList.remove('closed')
    body.classList.toggle('_lock');
    glmodal.classList.toggle('up');

    if(document.querySelector('.exit')){
        const exit = document.querySelector('.exit');
        exit.addEventListener("click",function(e){
            glmodal.classList.remove('up')
            body.classList.remove('_lock');
            glmodal.classList.toggle('closed');
            glmodal.innerHTML = " ";
        });
    }
});

modal3.addEventListener("click",function(e){
    let hash = window.location.hash;
    hash = hash.substr(1);
    if(hash === 'ru') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Краснодар</h2><p><img class=\"modal_img\" src=\"media/City/краснодар.jpg\" alt=\"photo\">«Если есть на свете рай…» – так начинается знаменитый девиз Краснодарского края. Сюда приезжают люди со всей страны, чтобы насладиться жарким южным солнцем, искупаться в тёплых водах Чёрного моря, отведать спелых фруктов и полюбоваться природными красотами этой земли. Краснодарский край – часть Кубанского региона. Столица Кубани – Краснодар – крупный промышленный, транспортный и культурный центр. Музеи, зоопарки, концертные залы, театры, парки и скверы, памятники и фонтаны – в этом городе есть куда пойти и чем заняться.</p><a href=\"payform.html\" class=\"modal_btn\"><span>Купить билет</span></a></div></div>";
    if(hash === 'en') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Krasnodar</h2><p><img class=\"modal_img\" src=\"media/City/краснодар.jpg\" alt=\"photo\">“If there is a paradise in the world…” – this is how the famous motto of the Krasnodar Territory begins. People from all over the country come here to enjoy the hot southern sun, swim in the warm waters of the Black Sea, taste ripe fruits and admire the natural beauties of this land. Krasnodar Territory is part of the Kuban region. The capital of the Kuban - Krasnodar - a major industrial, transport and cultural center. Museums, zoos, concert halls, theatres, parks and squares, monuments and fountains - there are places to go and things to do in this city.</p><a href=\"payform.html\" class=\"modal_btn\"><span>buy a ticket</span></a></div></div>";
    glmodal.classList.remove('closed')
    body.classList.toggle('_lock');
    glmodal.classList.toggle('up');

    if(document.querySelector('.exit')){
        const exit = document.querySelector('.exit');
        exit.addEventListener("click",function(e){
            glmodal.classList.remove('up')
            body.classList.remove('_lock');
            glmodal.classList.toggle('closed');
            glmodal.innerHTML = " ";
        });
    }
});

modal4.addEventListener("click",function(e){
    let hash = window.location.hash;
    hash = hash.substr(1);
    if(hash === 'ru') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Ставрополь</h2><p><img class=\"modal_img\" src=\"media/City/ставрополь.jpg\" alt=\"photo\">Грандиозный, судьбоносный, загадочный, волнительный, привлекательный и неумолимо прекрасный город Ставрополь – врата Кавказа. Он расположился в центральной части Предкавказья на холмах и распадках Ставропольской возвышенности в верховье реки Ташла. Ставрополь - краевой и административный центр Ставропольского края, был снован в 1777 году.На настоящий момент в городе насчитывается более 356 тысяч жителей и постоянно растет за счет мигрантов из близлежащих республик. Это город, насчитывающий необыкновенное число достопримечательностей.</p><a href=\"payform.html\" class=\"modal_btn\"><span>Купить билет</span></a></div></div>";
    if(hash === 'en') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Stavropol</h2><p><img class=\"modal_img\" src=\"media/City/ставрополь.jpg\" alt=\"photo\">The grandiose, fateful, mysterious, exciting, attractive and inexorably beautiful city of Stavropol is the gateway to the Caucasus. It is located in the central part of Ciscaucasia on the hills and ravines of the Stavropol Upland in the upper reaches of the Tashla River. Stavropol - the regional and administrative center of the Stavropol Territory, was founded in 1777.At the moment, the city has more than 356 thousand inhabitants and is constantly growing due to migrants from neighboring republics. This is a city with an unusual number of attractions.</p><a href=\"payform.html\" class=\"modal_btn\"><span>buy a ticket</span></a></div></div>";
    glmodal.classList.remove('closed')
    body.classList.toggle('_lock');
    glmodal.classList.toggle('up');

    if(document.querySelector('.exit')){
        const exit = document.querySelector('.exit');
        exit.addEventListener("click",function(e){
            glmodal.classList.remove('up')
            body.classList.remove('_lock');
            glmodal.classList.toggle('closed');
            glmodal.innerHTML = " ";
        });
    }
});

modal5.addEventListener("click",function(e){
    let hash = window.location.hash;
    hash = hash.substr(1);
    if(hash === 'ru') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Ульяновск</h2><p><img class=\"modal_img\" src=\"media/City/ульяновск.jpg\" alt=\"photo\">Ульяновск – это город на берегах реки Волги с уникальной историей. Ульяновск известен по всему миру как родина Владимира Ильича Ленина. Ульяновск – развитый промышленный центр, основу его экономики составляют предприятия автомобилестроения, авиа и приборостроения. Ульяновск – авиационная столица Российской Федерации.</p><a href=\"payform.html\" class=\"modal_btn\"><span>Купить билет</span></a></div></div>";
    if(hash === 'en') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Ulyanovsk</h2><p><img class=\"modal_img\" src=\"media/City/ульяновск.jpg\" alt=\"photo\">Ulyanovsk is a city on the banks of the Volga River with a unique history. Ulyanovsk is known throughout the world as the birthplace of Vladimir Ilyich Lenin. Ulyanovsk is a developed industrial center, the basis of its economy is automobile, aircraft and instrument making enterprises. Ulyanovsk is the aviation capital of the Russian Federation.</p><a href=\"payform.html\" class=\"modal_btn\"><span>buy a ticket</span></a></div></div>";
    glmodal.classList.remove('closed')
    body.classList.toggle('_lock');
    glmodal.classList.toggle('up');

    if(document.querySelector('.exit')){
        const exit = document.querySelector('.exit');
        exit.addEventListener("click",function(e){
            glmodal.classList.remove('up')
            body.classList.remove('_lock');
            glmodal.classList.toggle('closed');
            glmodal.innerHTML = " ";
        });
    }
});

modal6.addEventListener("click",function(e){
    let hash = window.location.hash;
    hash = hash.substr(1);
    if(hash === 'ru') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Ханты-Мансийск</h2><p><img class=\"modal_img\" src=\"media/City/хантымансийск.jpg\" alt=\"photo\">Ханты-Мансийский автономный округ – Югра знаменит, в первую очередь, нефтедобычей. Однако гостей округа знакомят и с традициями северных народов – ханты, манси, предлагают им попробовать аутентичные блюда региона, в первую очередь, из великолепной местной рыбы, показывают самые интересные природные красоты</p><a href=\"payform.html\" class=\"modal_btn\"><span>Купить билет</span></a></div></div>";
    if(hash === 'en') glmodal.innerHTML = "<div class=\"modal_content\"><div class=\"modal_in\"><span class=\"exit\"></span><h2>Khanty-Mansiysk</h2><p><img class=\"modal_img\" src=\"media/City/хантымансийск.jpg\" alt=\"photo\">The Khanty-Mansiysk Autonomous Okrug - Ugra is famous, first of all, for oil production. However, guests of the district are also introduced to the traditions of the northern peoples - Khanty, Mansi, they are offered to try authentic dishes of the region, primarily from magnificent local fish, they are shown the most interesting natural beauties</p><a href=\"payform.html\" class=\"modal_btn\"><span>buy a ticket</span></a></div></div>";
    glmodal.classList.remove('closed')
    body.classList.toggle('_lock');
    glmodal.classList.toggle('up');

    if(document.querySelector('.exit')){
        const exit = document.querySelector('.exit');
        exit.addEventListener("click",function(e){
            glmodal.classList.remove('up')
            body.classList.remove('_lock');
            glmodal.classList.toggle('closed');
            glmodal.innerHTML = " ";
        });
    }
});