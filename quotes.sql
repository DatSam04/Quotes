--
-- File generated with SQLiteStudio v3.3.3 on Thu Mar 17 18:28:06 2022
--
-- Text encoding used: UTF-8
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Table: authors
DROP TABLE IF EXISTS authors;

CREATE TABLE authors (
    author_id   INTEGER PRIMARY KEY AUTOINCREMENT,
    author_name VARCHAR NOT NULL
);

INSERT INTO authors (author_id, author_name) VALUES (1, 'Martin Luther King, Jr.');
INSERT INTO authors (author_id, author_name) VALUES (2, 'Maya Angelou');
INSERT INTO authors (author_id, author_name) VALUES (3, 'Winston Churchill');
INSERT INTO authors (author_id, author_name) VALUES (4, 'Malala Yousafzai');
INSERT INTO authors (author_id, author_name) VALUES (5, 'Oprah Winfrey');
INSERT INTO authors (author_id, author_name) VALUES (6, 'Stephen King');
INSERT INTO authors (author_id, author_name) VALUES (7, 'Mitch Hedberg');
INSERT INTO authors (author_id, author_name) VALUES (8, 'Unknown');
INSERT INTO authors (author_id, author_name) VALUES (10, 'Dat Boi Sam');

-- Table: category
DROP TABLE IF EXISTS category;

CREATE TABLE category (
    category_id INTEGER PRIMARY KEY AUTOINCREMENT,
    category    VARCHAR
);

INSERT INTO category (category_id, category) VALUES (1, 'inspirational');
INSERT INTO category (category_id, category) VALUES (2, 'funny');
INSERT INTO category (category_id, category) VALUES (4, 'scary');

-- Table: quotes
DROP TABLE IF EXISTS quotes;

CREATE TABLE quotes (
    quote_id      INTEGER PRIMARY KEY AUTOINCREMENT,
    quote_content TEXT    NOT NULL,
    favorite      BOOLEAN,
    author_id     INTEGER REFERENCES authors (author_id),
    category_id   INTEGER REFERENCES category (category_id) 
);

INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (1, 'You define your own life. Don’t let other people write your script.', 1, 5, 1);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (2, 'Success is not final, failure is not fatal: it is the courage to continue that counts', 1, 3, 1);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (3, 'You are never too old to set another goal or to dream a new dream.', NULL, 2, 1);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (4, 'Try to be a rainbow in someone’s cloud.', 1, 4, 1);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (5, 'You have to stay faithful to what you''re working on.', NULL, 6, 1);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (6, 'The trust of the innocent is the liar''s most useful tool.', NULL, 6, 2);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (7, 'My fake plants died because I did not pretend to water them.', NULL, 7, 2);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (8, 'If you obey all the rules you miss all the fun.', 1, 8, 2);
INSERT INTO quotes (quote_id, quote_content, favorite, author_id, category_id) VALUES (9, 'Out of the mountain of despair, a stone of hope', NULL, 1, 1);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
