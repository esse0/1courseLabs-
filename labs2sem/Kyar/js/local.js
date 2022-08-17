const select = document.querySelector('.GlLeng')
const allLang = ['ru', 'en'];

select.addEventListener('change', changeURLLang);

function changeURLLang(){
    let lang = select.value;
    location.href = window.location.pathname + '#' + lang;
    location.reload();
}

function changeLang(){
    let hash = window.location.hash;
    hash = hash.substr(1);
    if(!allLang.includes(hash)){
        location.href = window.location.pathname + '#ru';
        location.reload();
    }
    select.value = hash;
    if(select.value === 'ru'){
        select.classList.remove('en');
        select.classList.toggle('ru');
    }
    if(select.value === 'en'){
        select.classList.remove('ru');
        select.classList.toggle('en');
    }
    document.querySelector('.lng-n0').href = 'firstpage.html#' + hash;
    document.querySelector('.lng-n1').href = 'tariffpage.html#' + hash;
    document.querySelector('.lng-n2').href = 'specialOfferspage.html#' + hash;
    document.querySelector('.lng-n3').href = 'infopage.html#' + hash;
    document.querySelector('.lng-fo1').href = 'tariffpage.html#' + hash;
    document.querySelector('.lng-fo2').href = 'specialOfferspage.html#' + hash;
    document.querySelector('.lng-fo3').href = 'infopage.html#' + hash;


    for(let key in artitle){
        let ar = document.querySelector('.'+key);
        if(ar != null) ar.innerHTML = artitle[key][hash];
    }

    for(let key in langP1){
        let ar = document.querySelector('.lng-' + key)
        if(ar != null) ar.innerHTML = langP1[key][hash];
    }
    for(let key in langPlaceholders){
        let ar = document.querySelector('.lng-' + key);
        if(ar != null) ar.placeholder = langPlaceholders[key][hash];
    }
    for(let key in langValue){
        let ar = document.querySelector('.lng-' + key);
        if(ar != null) ar.value = langValue[key][hash];
    }
}

changeLang();